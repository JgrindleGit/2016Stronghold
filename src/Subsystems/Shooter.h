#ifndef Shooter_H
#define Shooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	float speeds[3] = {-0.4,0,1};
	int sped = 0;
	Victor* wh1;
	Victor* wh2;
	bool change = false;
public:
	Shooter();
	void InitDefaultCommand();
	virtual void SpeedC(int);
	virtual void Motset(float);
	virtual void MotShoot(int);
};

#endif
