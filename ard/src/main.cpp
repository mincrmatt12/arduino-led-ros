//
// Created by matthew on 11/01/17.
//

#include "main.h"
#include "led.h"
#include <ros.h>
#include <std_msgs/Int8.h>;
#include <Arduino.h>

LedManager leds;

ros::NodeHandle node;

void onData(const std_msgs::Int8& message) {
    leds.setLed((int) message.data);
}

ros::Subscriber<std_msgs::Int8> reader("led_control", &onData);

void loop() {
    node.spinOnce();
}

void setup() {
    for (int i = base; i < base+4; i++) {
        pinMode((uint8_t) i, OUTPUT);
    }

    leds = LedManager();

    node.initNode();
    node.subscribe(reader);
}