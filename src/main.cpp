#include <Arduino.h>
#include <WiFi.h>
#include <WebSocketsServer.h>
#include <WebServer.h>

const char* ssid="ESP32_CAR";
const char* pass="12345678";

WebServer server(80);
WebSocketsServer ws(81);

const int ENA=25,IN1=26,IN2=27,IN3=14,IN4=12,ENB=13;

const char PAGE[] PROGMEM=R"rawliteral(
<!doctype html><html><body><h2>Xbox Car</h2><pre id=o>Connect controller and press a button.</pre>
<script>
let s=new WebSocket("ws://192.168.4.1:81/");
function loop(){
 let g=navigator.getGamepads()[0];
 if(g&&s.readyState===1){
 let d={lx:g.axes[0],ly:g.axes[1]};
 s.send(JSON.stringify(d));
 o.textContent=JSON.stringify(d,null,2);
 }
 requestAnimationFrame(loop);
}
loop();
</script></body></html>)rawliteral";

void drive(float lx,float ly){
  int left=constrain((int)((-ly+lx)*255),-255,255);
  int right=constrain((int)((-ly-lx)*255),-255,255);
  auto motor=[](int en,int a,int b,int sp){
    if(sp>=0){digitalWrite(a,1);digitalWrite(b,0);}
    else {digitalWrite(a,0);digitalWrite(b,1);sp=-sp;}
    ledcWrite(en==ENA?0:1,sp);
  };
  motor(ENA,IN1,IN2,left);
  motor(ENB,IN3,IN4,right);
}

void onWs(uint8_t n,WStype_t t,uint8_t* p,size_t l){
 if(t==WStype_TEXT){
  String s=(char*)p;
  int ilx=s.indexOf("\"lx\":");
  int ily=s.indexOf("\"ly\":");
  if(ilx>=0&&ily>=0){
    float lx=s.substring(ilx+5,s.indexOf(",",ilx)).toFloat();
    float ly=s.substring(ily+5,s.indexOf("}",ily)).toFloat();
    drive(lx,ly);
  }
 }
}

void setup(){
 pinMode(IN1,1);pinMode(IN2,1);pinMode(IN3,1);pinMode(IN4,1);
 ledcSetup(0,1000,8); ledcAttachPin(ENA,0);
 ledcSetup(1,1000,8); ledcAttachPin(ENB,1);
 WiFi.softAP(ssid,pass);
 server.on("/",[](){server.send_P(200,"text/html",PAGE);});
 server.begin();
 ws.begin(); ws.onEvent(onWs);
}
void loop(){server.handleClient();ws.loop();}
