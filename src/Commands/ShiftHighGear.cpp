#include "ShiftHighGear.h"

ShiftHighGear::ShiftHighGear()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ShiftHighGear::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ShiftHighGear::Execute()
{
	driveTransmission->SetHighGear();
}

// Make this return true when this Command no longer needs to run execute()
bool ShiftHighGear::IsFinished()
{
	return true;;
}

// Called once after isFinished returns true
void ShiftHighGear::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShiftHighGear::Interrupted()
{

}
