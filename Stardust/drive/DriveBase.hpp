#pragma once

#include <frc/SpeedController.h>

#include "Stardust/control/BetterController.hpp"

class DriveBase {
public:
    DriveBase(frc::SpeedController* m0, frc::SpeedController* m1, frc::SpeedController* m2, frc::SpeedController* m3) {
        mMotor0=m0;
        mMotor1=m1;
        mMotor2=m2;
        mMotor3=m3;
    }

    virtual void drive(float y) {}
    virtual void drive(float x, float r) {}
    virtual void drive(float x, float y, float r) {}

    virtual void drive(BetterController* x) {}

   private:
    //multipliers
    float mXSpeed=0; //parallel to front face of bot
    float mYSpeed=0; //perpendicular to front face of bot
    float mRotation=0;
    float mGyro=0;

    frc::SpeedController* mMotor0;
    frc::SpeedController* mMotor1;
    frc::SpeedController* mMotor2;
    frc::SpeedController* mMotor3;
};