#include <iostream>
#include <frc/TimedRobot.h>

void func();

class Robot : public frc::TimedRobot {
  public:
   void RobotInit() override;
   void RobotPeriodic() override;
};