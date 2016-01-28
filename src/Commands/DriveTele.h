#ifndef DriveTele_H
#define DriveTele_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "RobotMap.h"

class DriveTele: public CommandBase
{
public:
	DriveTele();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
