/*
  SenseoControl.h - Library for the SenseoWifi project.
  Created by Thomas Dietrich, 2016-03-05.
  Released under some license.
*/
#ifndef SenseoControl_h
#define SenseoControl_h

#include "Arduino.h"
#include "enums.h"

class SenseoControl
{
  public:
    SenseoControl(int pBPin, int lBPin, int rBPin);
    void setMqttMessage(String msg);
    bool hasMqttMsg();
    bool reactOnMqttMsg(senseoStateEnum senseoState);
  private:
    bool cupAvailable = false;
    String mqttMsg = "";
    int powerButtonPin;
    int leftButtonPin;
    int rightButtonPin;
    void pressPowerButton();
    void pressLeftButton();
    void pressRightButton();
};

#endif
