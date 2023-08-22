// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <frc2/command/CommandScheduler.h>

void Robot::RobotInit() {}

/**
 * This function is called every 20ms, for every mode. 
 * Common usage is for diagnostics gathering.
 * This runs after the mode specific periodic functions, but before LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {

	frc2::CommandScheduler::GetInstance().Run();
}

/**
 * This function is called once every time the robot enters Disabled mode.
 * Common usage is to clear any subsystem information when the robot is disabled.
 */
void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

/**
 * This function runs the autonomous command selected by your RobotContainer class.
 */
void Robot::AutonomousInit() {
	m_autonomousCommand = m_container.GetAutonomousCommand();

	if (m_autonomousCommand) {
		// If you don't know what the arrow does, look in the readme!
		m_autonomousCommand->Schedule();
	}
}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {
  // This makes sure that the autonomous stops running when teleop starts running.
  // Remove this if autonomous should continue until interrupted by another command.
  if (m_autonomousCommand) {
	// If you don't know what the arrow does, look in the readme!
    m_autonomousCommand->Cancel();
  }
}

/**
 * This function is called periodically during operator control.
 */
void Robot::TeleopPeriodic() {}

/**
 * This function is called periodically during test mode.
 */
void Robot::TestPeriodic() {}

/**
 * This function is called once when the robot is first started up.
 */
void Robot::SimulationInit() {}

/**
 * This function is called periodically whilst in simulation.
 */
void Robot::SimulationPeriodic() {}

// Don't touch this just know it is important
// It involves explaining complex C++ and FRC material, just know it's supposed to be here
#ifndef RUNNING_FRC_TESTS
int main() {
	return frc::StartRobot<Robot>();
}
#endif