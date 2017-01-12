//
// Created by matthew on 11/01/17.
//

#include <Arduino.h>
#include "led.h"

LedManager::LedManager() {
    this->activeLed = 0;
    this->setLed(0);
}

void LedManager::setLed(int led) {
    digitalWrite((uint8_t) (base + this->activeLed), LOW);
    this->activeLed = led;
    digitalWrite((uint8_t) (base + led), HIGH);
}
