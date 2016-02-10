#include "LiftToSwitch.h"

LiftToSwitch::LiftToSwitch()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void LiftToSwitch::Initialize()
{
	lifter->Extend();
}

// Called repeatedly when this Command is scheduled to run
void LiftToSwitch::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool LiftToSwitch::IsFinished()
{
	return lifter->Switch();
}

// Called once after isFinished returns true
void LiftToSwitch::End()
{
	lifter->Off();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToSwitch::Interrupted()
{
	End();
}
