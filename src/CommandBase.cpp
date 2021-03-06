#include "CommandBase.h"
#include "Commands/Scheduler.h"

std::unique_ptr<DriveSystem> CommandBase::driveSystem;
std::unique_ptr<Arm> CommandBase::arm;
std::unique_ptr<OI> CommandBase::oi;
std::unique_ptr<Shooter> CommandBase::shooter;
std::unique_ptr<Lifter> CommandBase::lifter;
std::unique_ptr<ShooterPunch> CommandBase::shooterPunch;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	RobotMap::init();

	// Create a single static instance of all of your subsystems
	driveSystem.reset(new DriveSystem());
	arm.reset(new Arm());
	shooter.reset(new Shooter());
	lifter.reset(new Lifter());
	shooterPunch.reset(new ShooterPunch());

	//RobotMap::rec->AddSubsystem(driveSystem.get());
	//RobotMap::rec->AddSubsystem(arm.get());
	//RobotMap::rec->AddSubsystem(shooter.get());
	//RobotMap::rec->AddSubsystem(shooterPunch.get());
	//Setup OI
	oi.reset(new OI());
}
