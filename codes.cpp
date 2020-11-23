/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\aura0                                            */
/*    Created:      Fri Nov 20 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    2, 3            
// RMotor               motor         1               
// LMotor               motor         10              
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

#define PI 2*acos(0.0)

void move(float dis){
  float deg=360*dis/25.933825;
  float V;
  RMotor.setStopping(brake);
  LMotor.setStopping(brake);
  RMotor.setVelocity(0,percent);
  LMotor.setVelocity(0,percent);
  RMotor.spin(forward);
  LMotor.spin(forward);
  RMotor.setPosition(0,degrees);
  LMotor.setPosition(0,degrees);
  for(float i=1;i<=90;i++){
    V=(1-cos(i*PI/180))*100;
    RMotor.setVelocity(V,percent);
    LMotor.setVelocity(V,percent);
    if(deg-RMotor.position(degrees)<V*3.5){
      break;
    }
    wait(0.01,seconds);
  }
  if(deg-RMotor.position(degrees)<V*3.5){
    waitUntil(deg-RMotor.position(degrees)<350);
  }
  while(deg-RMotor.position(degrees)>14){
    RMotor.setVelocity((deg-RMotor.position(degrees))/3.5,percent);
    LMotor.setVelocity((deg-RMotor.position(degrees))/3.5,percent);
  }
  RMotor.stop();
  LMotor.stop();
}

void turn(float deg){
  RMotor.setStopping(brake);
  LMotor.setStopping(brake);
  RMotor.setVelocity(0,percent);
  LMotor.setVelocity(0,percent);
  if(deg>)
  RMotor.spin(forward);
  LMotor.spin(forward);
}


int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  move(250);
}
