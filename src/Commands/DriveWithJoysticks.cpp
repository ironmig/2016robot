#include "Commands/DriveWithJoysticks.h"

DriveWithJoysticks::DriveWithJoysticks()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driveSystem);
}

// Called just before this Command runs the first time
void DriveWithJoysticks::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoysticks::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoysticks::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveWithJoysticks::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoysticks::Interrupted()
{

}
