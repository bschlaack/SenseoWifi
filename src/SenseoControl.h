/*
  SenseoControl.h - Library for the SenseoWifi project.
  Created by Thomas Dietrich, 2016-03-05.
  Released under some license.
*/
#ifndef SenseoControl_h
#define SenseoControl_h

#include "Homie.h"
#include "enums.h"

class SenseoControl
{
  public:
    SenseoControl(int pBPin, int lBPin, int rBPin);
    void pressPowerButton();
    void pressLeftButton();
    void pressRightButton();
  private:
    int powerButtonPin;
    int leftButtonPin;
    int rightButtonPin;
};

#endif
