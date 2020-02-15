#pragma once

#include <AHRS.h>
#include <frc/I2C.h>

#include "StarDust/sensor/motion/ADXRS450_Gyro.hpp"
#include "StarDust/core/StarDustComponent.hpp"

//Wrapper class for the AHRS Gyro

class AHRS_Gyro : public StarDustComponent, public AHRS {
public:
    AHRS_Gyro() :
        AHRS(frc::I2C::Port::kOnboard)
        {}

    void __RobotInit__() override;
    void __RobotPeriodic__() override;
    void __AutonomousInit__() override;
    void __AutonomousPeriodic__() override;
    void __TeleopInit__() override;
    void __TeleopPeriodic__() override;
    void __TestPeriodic__() override;

    //override original function to return cached degree not base class's degree
    double GetAngle();

    double GetAngleMod();
    double GetAngleMod(double deg);

    double FastestToZero();
    double FastestTo(double deg);

private:
    void update();

    double cached_degree=0;

    //flag is set when teleop/auto is ran
    bool started=false;
};