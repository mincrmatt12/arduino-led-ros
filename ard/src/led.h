//
// Created by matthew on 11/01/17.
//

#ifndef ARD_LED_H
#define ARD_LED_H

const int base = 3;

class LedManager {
public:
    int activeLed;

    LedManager();
    void setLed(int led);
};


#endif //ARD_LED_H
