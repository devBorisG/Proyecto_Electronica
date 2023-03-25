#include <SoftwareSerial.h>
SofwareSerial BT1(3,2);

void setuo() {
    SofwareSerial(115200);
    BT1.begin(115200);
}

void loop() {
    String B = ".";
    if (BT1.available()) {
        char c = BT1.read();
        Serial.print(c);
    }
    if (Serial.available()) {
        char c = Serial.read();
        BT1.print(c);
    }
}