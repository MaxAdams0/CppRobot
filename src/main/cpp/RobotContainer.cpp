// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include <frc2/command/button/Trigger.h>

#include "commands/Autos.h"
#include "commands/ExampleCommand.h"

/* Constructor where all commands and subsystems will be initialized */
RobotContainer::RobotContainer() {

	/* Configure control bindings */
	ConfigureBindings();
}

/* This is where you bind controls */
void RobotContainer::ConfigureBindings() {

	// Schedule `ExampleCommand` when `exampleCondition` changes to `true`
	frc2::Trigger([this] {
		return m_subsystem.ExampleCondition();
	}).OnTrue(ExampleCommand(&m_subsystem).ToPtr());

	// 'm_driverController' is an Xbox Controller, and .B() is the B button 
	// When B is pressed, the subsystem process will run 'ExampleMethodCommand' 
	m_driverController.B().WhileTrue(m_subsystem.ExampleMethodCommand());
}

frc2::CommandPtr RobotContainer::GetAutonomousCommand() {
	// This is an example command to be run in autonomous
	return autos::ExampleAuto(&m_subsystem);
}
