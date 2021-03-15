#include <ESP8266WiFi.h>


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
WiFi.begin("Mooazam", "mooazam123");
while(WiFi.status() != WL_CONNECTED){
  Serial.println("..");
  delay(2000);
}
Serial.println();
Serial.println("NOdeMCU  is Connected");
Serial.print(WiFi.localIP());
}
void loop() {

}
