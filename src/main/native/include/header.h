#include <iostream>
#include <frc/TimedRobot.h>

class Robot : public frc::TimedRobot {
  public:
   void RobotInit() override;
   void RobotPeriodic() override;
};