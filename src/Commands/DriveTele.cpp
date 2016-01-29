#include "DriveTele.h"

DriveTele::DriveTele()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(db);
}

// Called just before this Command runs the first time
void DriveTele::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveTele::Execute()
{
	db->driveStick(oi->getXbox()->GetRawAxis(LX), oi->getXbox()->GetRawAxis(LY));
}

// Make this return true when this Command no longer needs to run execute()
bool DriveTele::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveTele::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveTele::Interrupted()
{

}
