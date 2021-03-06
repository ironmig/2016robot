#include "RobotMap.h"

//Set all sensors/actuator to NULL
std::shared_ptr<SpeedController> RobotMap::leftOne;
std::shared_ptr<SpeedController> RobotMap::leftTwo;
std::shared_ptr<SpeedController> RobotMap::rightOne;
std::shared_ptr<SpeedController> RobotMap::rightTwo;
std::shared_ptr<RobotDrive> RobotMap::drive;
std::shared_ptr<Gyro> RobotMap::gyro;
#ifndef SIMULATION
std::shared_ptr<Compressor> RobotMap::compressor;
#endif
std::shared_ptr<SpeedController> RobotMap::armMotor;
std::shared_ptr<Potentiometer> RobotMap::armPot;
std::shared_ptr<SpeedController> RobotMap::shooterLeft;
std::shared_ptr<SpeedController> RobotMap::shooterRight;
//std::shared_ptr<Encoder> RobotMap::shooterLeftEncoder;
//std::shared_ptr<Encoder> RobotMap::shooterRightEncoder;
std::shared_ptr<Solenoid> RobotMap::lifterPistonForward;
std::shared_ptr<Solenoid> RobotMap::lifterPistonReverse;
std::shared_ptr<DigitalInput> RobotMap::lifterSwitch;
std::shared_ptr<DoubleSolenoid> RobotMap::shooterPunch;
//std::shared_ptr<Recorder> RobotMap::rec;
std::shared_ptr<DigitalInput> RobotMap::armBottomSwitch;
std::shared_ptr<DigitalInput> RobotMap::pressureSwitch;

void RobotMap::init()
{
	//rec.reset(Recorder::GetInstance());
	pressureSwitch.reset(new DigitalInput(1));

	gyro.reset(new ADXRS450_Gyro());
	compressor.reset(new Compressor(1));

	shooterLeft.reset(new Victor(0));
	shooterRight.reset(new Victor(1));

	//Init all sensors/actuators with proper port #, add to LiveWindow
	leftOne.reset(new Victor(2));
	//rec->AddDevice("LeftOne",leftOne.get());
	leftTwo.reset(new Victor(3));
	//rec->AddDevice("LeftTwo",leftTwo.get());
	rightOne.reset(new Victor(4));
	//rec->AddDevice("RightOne",rightOne.get());
	rightTwo.reset(new Victor(5));
	//rec->AddDevice("RightTwo",rightTwo.get());
	drive.reset(new RobotDrive(leftOne,leftTwo,rightOne,rightTwo));
	drive->SetExpiration(2);

	armMotor.reset(new Victor(6));
	//rec->AddDevice("armMotor",armMotor.get());
	//armMotor->SetInverted(true);

	armPot.reset(new AnalogPotentiometer(0,360,0));

	//rec->AddDevice("shooterLeft",shooterLeft.get());
	//rec->AddDevice("shooterRight",shooterRight.get());

	lifterPistonForward.reset(new Solenoid(1,2));
	lifterPistonReverse.reset(new Solenoid(1,3));
	lifterSwitch.reset(new DigitalInput(4));

	shooterPunch.reset(new DoubleSolenoid(1,4,7));
	//rec->AddDevice("Punch",shooterPunch.get());

	armBottomSwitch.reset(new DigitalInput(0));
}
