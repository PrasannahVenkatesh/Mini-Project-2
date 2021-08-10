#include<ESP8266WiFi.h>

const int trigP = 2;  //D4 Or GPIO-2 of nodemcu
const int echoP = 0;  //D3 Or GPIO-0 of nodemcu
char* ssid = "realme 3";
char* pass = "@welcome1";

long duration;
int distance;
float strength;

void setup() {
  
  pinMode(trigP, OUTPUT);  // Sets the trigPin as an Output
  pinMode(echoP, INPUT);   // Sets the echoPin as an Input
  Serial.begin(9600);      // Open serial channel at 9600 baud rate
  WiFi.begin(ssid,pass);//connecting to owner device
  Serial.println(WiFi.status());
  //if(WiFi.status() == WL_CONNECTED){
    //Serial.println("connected to : ");
    //Serial.println(ssid);
  //}
}

void loop() {
  Serial.print("IP is ");
  Serial.println(WiFi.localIP());
  Serial.println(WiFi.status());
  Serial.println(WiFi.SSID());
  strength = WiFi.RSSI();
  Serial.println(strength);
  delay(1000);

/*digitalWrite(trigP, LOW);   // Makes trigPin low
delayMicroseconds(2);       // 2 micro second delay 

digitalWrite(trigP, HIGH);  // tigPin high
delayMicroseconds(10);      // trigPin high for 10 micro seconds
digitalWrite(trigP, LOW);   // trigPin low

duration = pulseIn(echoP, HIGH);   //Read echo pin, time in microseconds
distance= duration*0.034/2;        //Calculating actual/real distance


Serial.print("Distance = ");        //Output distance on arduino serial monitor 
Serial.println(distance);
delay(3000);                        //Pause for 3 seconds and start measuring distance again*/
}
