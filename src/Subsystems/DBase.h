#ifndef DBase_H
#define DBase_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DBase: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	SpeedController* left1;
	SpeedController* left2;
	SpeedController* right1;
	SpeedController* right2;
	RobotDrive* robot;
public:
	DBase();
	void InitDefaultCommand();
	virtual void driveStick(float, float);
};

#endif
