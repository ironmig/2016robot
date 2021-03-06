#include "SmartDashboardInfo.h"

SmartDashboardInfo::SmartDashboardInfo()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Initialize();
}

// Called just before this Command runs the first time
void SmartDashboardInfo::Initialize()
{
	SmartDashboard::PutNumber("Pot1",0);
	SmartDashboard::PutNumber("Gyro",0);
	SmartDashboard::PutBoolean("Bottom",false);
}

// Called repeatedly when this Command is scheduled to run
void SmartDashboardInfo::Execute()
{
	SmartDashboard::PutNumber("Pot1",arm->GetPot());
	SmartDashboard::PutNumber("Gyro",this->driveSystem->GyroAngle());
	SmartDashboard::PutBoolean("Bottom",this->arm->BottomSwitch());
}

// Make this return true when this Command no longer needs to run execute()
bool SmartDashboardInfo::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void SmartDashboardInfo::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SmartDashboardInfo::Interrupted()
{

}
