#include <IRremote.hpp>
#include <IRremote.h>
#include <virtuabotixRTC.h>
int IRPin = 2; // Changed this to 2
#define trigPin 4
#define echoPin 3
long sure, mesafe;
IRsend irsend(IRPin);
const int RECV_PIN = 9;
IRrecv irrecv(RECV_PIN);
decode_results results;

virtuabotixRTC myRTC(6, 7, 8);

void setup()
{
    Serial.begin(9600); // Initialize serial interface
    irrecv.enableIRIn();
    irrecv.blink13(true);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    delay(3000);
}

void myRTC_function() {
  myRTC.updateTime();
  if (myRTC.seconds == 00 && myRTC.minutes == 00 && myRTC.hours == 7 && myRTC.dayofweek >= 1 && myRTC.dayofweek <= 5) {
    irsend.sendNEC(0x0, 0x45, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0); // 24 Kere
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    sure = 1000;
  } else if(myRTC.seconds == 00 && myRTC.hours == 8 && myRTC.minutes == 10 && myRTC.dayofweek >= 1 && myRTC.dayofweek <= 5){
    irsend.sendNEC(0x0, 0x45, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0); // 24 Kere
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    sure = 1000;
  }
}

void telefonkizilotesikontrol_function() {
    if (irrecv.decode(&results)){
        Serial.print(results.value, HEX);
        Serial.println(" ");
        switch(results.value) {
          case 0x641DF41E:
            irsend.sendNEC(0x0, 0x45, 0);
            break;
          case 0x58054628:
            irsend.sendNEC(0x0, 0x45, 0);
            break;
          case 0xB5458ADA:
            irsend.sendNEC(0x0, 0x5E, 0);
            break;
          case 0x91BCEE7E:
            irsend.sendNEC(0x0, 0xC, 0);
            break;
          case 0x7ADE9706:
            irsend.sendNEC(0x0, 0x5E, 0);
            break;
          case 0x9FDB3198:
            irsend.sendNEC(0x0, 0xC, 0);
            break;
          case 0x9785C7F8:
            irsend.sendNEC(0x0, 0x52, 0);
            break;
          case 0xBFD1D0EA:
            irsend.sendNEC(0x0, 0x52, 0);
        }
        irrecv.resume();
  }
}

void mesafesensoru_function() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(3);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  sure = pulseIn(echoPin, HIGH);
  mesafe = (sure/2) * 0.0343;
  if(mesafe < 16) {
    irsend.sendNEC(0x0, 0x45, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0); // 24 Kere
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    irsend.sendNEC(0x0, 0x5E, 0);
    delay(200);
    sure = 1000;
  }
}

void loop() 
{ 
  myRTC_function();
  telefonkizilotesikontrol_function();
  mesafesensoru_function();
}