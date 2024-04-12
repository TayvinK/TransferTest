using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern smartdrive Drivetrain;
extern motor_group MotorGroup9;
extern digital_in DigitalInA;
extern digital_out DigitalOutB;
extern limit LimitSwitchE;
extern bumper BumperC;
extern signature Vision12__SIG_1;
extern signature Vision12__SIG_2;
extern signature Vision12__SIG_3;
extern signature Vision12__SIG_4;
extern signature Vision12__SIG_5;
extern signature Vision12__SIG_6;
extern signature Vision12__SIG_7;
extern vision Vision12;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );