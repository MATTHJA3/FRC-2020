/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Climber.h"

Climber::Climber(Robot * pRobot) 
{
    this->pRobot = pRobot;
}

void Climber::climbUpDown(float i)
{
    pRobot->ClimbingMotor.Set(ControlMode::PercentOutput, i);
}
