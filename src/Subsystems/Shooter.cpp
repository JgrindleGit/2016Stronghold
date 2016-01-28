#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter() :
		Subsystem("ExampleSubsystem")
{

}

void Shooter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
//for non vision
void Shooter::SpeedC(int dir){
	switch(dir){
	case 0:
		if (change == false){
			if (sped < 2){
				sped = sped + 1;
				printf("Speed up \n");
				change = true;
			}
		}
		break;
	case 180:
		if(change == false){
			if(sped > -1){
				sped = sped - 1;
				printf("Speed Down \n");
				change = true;
			}
		}

		break;
	default:
		printf("Nothing\n");
		change = false;
		break;
	}
	printf("%d", sped);
	printf("\n");

}
void Shooter::Motset(float power){
	wh1->Set(power);
	wh2->Set(-power);
}
void Shooter::MotShoot(int POV){
	SpeedC(POV);
	Motset(speeds[sped]);

}
