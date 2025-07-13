#include "header.h"
#include "driverheader.h"

void func() {
  std::cout << "Hello World from source.cpp\n";
  c_doThing();
}

void Robot::RobotInit() {
  std::cout << "Hello World from Robot::RobotInit\n";
}

void Robot::RobotPeriodic() {
  std::cout << "Hello World from Robot::RobotPeriodic\n";
}
