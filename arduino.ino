#include <Arduino.h>

int pinLed = 5;
int pinButton = 2;
int buttonState = 0;
void setup() {
    Serial.begin(9600);
    pinMode(pinLed, OUTPUT);
    pinMode(pinButton, INPUT);

}

void loop() {
    buttonState = digitalRead(pinButton);
    Serial.println(buttonState);
    if (buttonState == HIGH) {
        digitalWrite(pinLed, HIGH);
    } else {
        digitalWrite(pinLed, LOW);
    }
    delay(10);


}
