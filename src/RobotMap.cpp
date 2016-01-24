#include "RobotMap.h"

//Set all sensors/actuator to NULL
std::shared_ptr<SpeedController> RobotMap::leftOne;
std::shared_ptr<SpeedController> RobotMap::leftTwo;
std::shared_ptr<SpeedController> RobotMap::rightOne;
std::shared_ptr<SpeedController> RobotMap::rightTwo;
std::shared_ptr<RobotDrive> RobotMap::drive;
std::shared_ptr<Compressor> RobotMap::compressor;
std::shared_ptr<DoubleSolenoid> RobotMap::leftTransmission;
std::shared_ptr<DoubleSolenoid> RobotMap::rightTransmission;
std::shared_ptr<SpeedController> RobotMap::armMotor;
std::shared_ptr<SpeedController> RobotMap::shooterLeft;
std::shared_ptr<SpeedController> RobotMap::shooterRight;

void RobotMap::init()
{
	//Init all sensors/actuators with proper port #, add to LiveWindow
	leftOne.reset(new Talon(0));
	leftTwo.reset(new Talon(1));
	rightOne.reset(new Talon(2));
	rightTwo.reset(new Talon(3));
	drive.reset(new RobotDrive(leftOne,leftTwo,rightOne,rightTwo));

	compressor.reset(new Compressor(0));
	leftTransmission.reset(new DoubleSolenoid(0,0,1));
	rightTransmission.reset(new DoubleSolenoid(0,2,3));

	armMotor.reset(new Talon(4));

	shooterLeft.reset(new Talon(5));
	shooterRight.reset(new Talon(6));
}