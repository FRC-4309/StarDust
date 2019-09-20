#pragma once

#include "StarDust/sensor/motion/BetterGyro.hpp"
#include "StarDust/core/StarDustComponent.hpp"
#include "StarDust/drive/DriveBase.hpp"

class DriveAUX : public StarDustComponent {
public:
    DriveAUX(DriveBase* db, double t) {
        base=db;
        threshold=t;
    }
    DriveAUX(DriveBase* db, BetterGyro* bg, double t) {
        base=db;
        gyro=bg;
        threshold=t;
    }

    void __RobotInit__() override;
    void __RobotPeriodic__() override;
    void __AutonomousInit__() override;
    void __AutonomousPeriodic__() override;
    void __TeleopInit__() override;
    void __TeleopPeriodic__() override;
    void __TestPeriodic__() override;

    void GyroRotate(double r);
    void GyroRotateTo(double g, double r);
    void GyroRotateTo(double g, double r, double y);

private:
    DriveBase* base;
    BetterGyro* gyro;

    double threshold; //minimum amount needed to move drivetrain
};