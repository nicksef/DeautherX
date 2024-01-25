/* This software is licensed under the MIT License: https://github.com/BlackTechX011/DeautherX */

#pragma once

#include <Arduino.h>

namespace wifi {

    void begin();

    String getMode();
    void printStatus();

    void startNewAP(String path, String ssid, String password, uint8_t ch, bool hidden, bool captivePortal);
    void startEvilTwin(String apn);
    // void startAP(String path);
    void startWebServer();
    void startAP();

    void stopAP();
    void resumeAP();

    void update();
}