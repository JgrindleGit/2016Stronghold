#include "DBase.h"
#include "../RobotMap.h"

DBase::DBase() :
		Subsystem("DriveBase")
{

}

void DBase::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void DBase::driveStick(float fb, float lr){

}
