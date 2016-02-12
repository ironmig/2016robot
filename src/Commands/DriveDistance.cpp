#include "DriveDistance.h"

DriveDistance::DriveDistance(double d)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	distance = d;
}

// Called just before this Command runs the first time
void DriveDistance::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveDistance::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool DriveDistance::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveDistance::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveDistance::Interrupted()
{

}
double DriveDistance::PIDGet()
{
	return driveSystem->Distance();
}
void DriveDistance::PIDWrite(float output)
{
	driveSystem->Drive(output,0);
}
