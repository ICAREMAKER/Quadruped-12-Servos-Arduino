/* 
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /        __________   _________   ___________   __________    _________                             /
   /       /___   ___/  /   _____/  /  _____   /  /  _____   \  /  ______/       \\            //      /
   /          /  /     /  /        /  /    /  /  /  /    /  /  /  /_____        \\             //      /
   /         /  /     /  /        /  /____/  /  /  /___/  /   /  ______/   \\\   \\    []    //   ///  /
   /     ___/  /__   /  /_____   /   ____   /  /   ___   \   /  /_____        \\\\--]]]/\[[[--////     /
   /    /________/  /________/  /__/    /__/  /__/    \__/  /________/         /////--][][--\\\\\      /
   /                                                                         //   //--][][--\\   \\    /
   /   ______________________________________________________________           //    ][][    \\       /
   /                                                                                                   /
   /                                                                                                   /
   /  This program is free software for arduino; you can redistribute it and/or modify.                /
   /  Ce programme pour Arduino est libre et gratuit ; vous pouvez le distribuez et/ou le modifier.    /
   /                                                                                                   /
   / Another codes / Autres codes:                                                                     /
   / https://www.icaremaker.com                                                                        /
   / Mail: ionocraft@hotmail.fr                                                                        /
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
*/
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

//Nous allons definir les parametres des servos RDS3115mg pour une consertion des angles
#define SERVOMIN  500 // l'impulsion minimale correspond à la position 0° (out of 4096)
#define SERVOMAX  2500 // l'impulsion maximale correspond à la position 180° (out of 4096)

////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);
  pwm.begin();         // permet d'initialiser le Driver.
  pwm.setPWMFreq(60);  // permet de fixer la fréquence du signal PWM (entre 40 et 1000 Hz). 
  delay(500);
  
  STARTER();
  delay(2000);
  DEBOUT();
  delay(2000);
  COUCOU();
  delay(2000);
}

void loop() {
  ANIMATION1();
  delay(2000);
  DEBOUT();
  delay(2000);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int angleToPulse(int ang) {
   int pulse = map(ang,0, 180, SERVOMIN,SERVOMAX);// map angle of 0 to 180 to Servo min and Servo max 
   return pulse;
}

 void STARTER() {
	// pwm.writeMicroseconds(#Pin,(Angle en microseconde + Correction)
  pwm.writeMicroseconds(0,(1500+100));   // Doigt AVG
  delay(100);
  pwm.writeMicroseconds(1,(1500+100));   // Bras AVG
  delay(100);
  pwm.writeMicroseconds(2,(1500+100));   // Epaule AVG
  delay(100);
  pwm.writeMicroseconds(4,(1500+100));   // Doigt AVD
  delay(100);
  pwm.writeMicroseconds(6,(1500+0));     // Bras AVD
  delay(100);
  pwm.writeMicroseconds(5,(1500+100));   // Epaule AVD
  delay(100);
  pwm.writeMicroseconds(8,(1500+100));   // Doigt ARD
  delay(100);
  pwm.writeMicroseconds(9,(1500+100));   // Bras ARD
  delay(100);
  pwm.writeMicroseconds(10,(1500+100));  // Epaule ARD
  delay(100);
  pwm.writeMicroseconds(12,(1500+100));  // Doigt ARG
  delay(100);
  pwm.writeMicroseconds(13,(1500+50));   // Bras ARG
  delay(100);
  pwm.writeMicroseconds(14,(1500+50));   // Epaule ARG
  delay(100);
  }

 void DEBOUT() {
	// pwm.writeMicroseconds(#Pin,(Angle en microseconde + Correction)
  pwm.writeMicroseconds(0,(2000+100));  // Doigt AVG
  delay(100);
  pwm.writeMicroseconds(1,(2000+100));  // Bras AVG
  delay(100);
  pwm.writeMicroseconds(2,(1500+100));  // Epaule AVG
  delay(100);
  pwm.writeMicroseconds(4,(1000+100));  // Doigt AVD
  delay(100);
  pwm.writeMicroseconds(6,(1000+0));    // Bras AVD
  delay(100);
  pwm.writeMicroseconds(5,(1500+100));  // Epaule AVD
  delay(100);
  pwm.writeMicroseconds(8,(2000+100));  // Doigt ARD
  delay(100);
  pwm.writeMicroseconds(9,(2000+100));  // Bras ARD
  delay(100);
  pwm.writeMicroseconds(10,(1500+100)); // Epaule ARD
  delay(100);
  pwm.writeMicroseconds(12,(1000+100)); // Doigt ARG
  delay(100);
  pwm.writeMicroseconds(13,(1000+50));  // Bras ARG
  delay(100);
  pwm.writeMicroseconds(14,(1500+50));  // Epaule ARG
  delay(100);
  }

 void ANIMATION1() {
	 /* J'anime comme une partition musicale 
	 500  => 0°
	 1000 => 45°
	 1500 => 90°
	 2000 => 135°
	 2500 => 180°
	 Rotation => Sens anti-horaire
	 */
	 
	 // Patte avant gauche
int Pos1[8] = {1500, 1500, 1500, 1500, 2000, 2000, 2000, 2000};  // Doigt AVG
int Pos2[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Bras AVG
int Pos3[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Epaule AVG
    // Patte avant droite
int Pos4[8] = {1500, 1500, 1500, 1500, 1000, 1000, 1000, 1000};  // Doigt AVD
int Pos5[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Bras AVD
int Pos6[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Epaule AVD
    // Patte arriere droite
int Pos7[8] = {1500, 1500, 1500, 1500, 2000, 2000, 2000, 2000};  // Doigt ARD
int Pos8[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Bras ARD
int Pos9[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Epaule ARD
    // Patte arriere gauche
int Pos10[8] = {1500, 1500, 1500, 1500, 1000, 1000, 1000, 1000}; // Doigt ARG
int Pos11[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500}; // Bras ARG
int Pos12[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500}; // Epaule ARG

for (int s = 0; s < 8; s++) {
	// pwm.writeMicroseconds(#Pin,(Angle en microseconde + Correction)
  pwm.writeMicroseconds(0,(Pos1[s]+100));   // Doigt AVG
  pwm.writeMicroseconds(4,(Pos4[s]+100));   // Doigt AVD
  pwm.writeMicroseconds(8,(Pos7[s]+100));   // Doigt ARD
  pwm.writeMicroseconds(12,(Pos10[s]+100)); // Doigt ARG
  
  pwm.writeMicroseconds(1,(Pos2[s]+100));   // Bras AVG
  pwm.writeMicroseconds(6,(Pos5[s]+0));     // Bras AVD
  pwm.writeMicroseconds(9,(Pos8[s]+100));   // Bras ARD
  pwm.writeMicroseconds(13,(Pos11[s]+50));  // Bras ARG

  pwm.writeMicroseconds(2,(Pos3[s]+100));   // Epaule AVG
  pwm.writeMicroseconds(5,(Pos6[s]+100));   // Epaule AVD
  pwm.writeMicroseconds(10,(Pos9[s]+100));  // Epaule ARD
  pwm.writeMicroseconds(14,(Pos12[s]+50));  // Epaule ARG
  
  delay(200);
  }
 }
 
 void COUCOU()
 {
	 /* J'anime comme une partition musicale 
	 500  => 0°
	 1000 => 45°
	 1500 => 90°
	 2000 => 135°
	 2500 => 180°
	 Rotation => Sens anti-horaire
	 */
	 
 // Patte avant gauche
int Pos1[8] = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Doigt AVG
int Pos2[8] = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Bras AVG
int Pos3[8] = {1500, 1500, 2000, 1000, 2000, 1000, 1500, 1500};  // Epaule AVG
    // Patte avant droite
int Pos4[8] = {1000, 2000, 2000, 2000, 2000, 2000, 2000, 1000};  // Doigt AVD
int Pos5[8] = {1000, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Bras AVD
int Pos6[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Epaule AVD
	// Patte arriere droite
int Pos7[8] = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Doigt ARD
int Pos8[8] = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Bras ARD
int Pos9[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Epaule ARD
    // Patte arriere gauche
int Pos10[8] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000}; // Doigt ARG
int Pos11[8] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000}; // Bras ARG
int Pos12[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500}; // Epaule ARG



for (int s = 0; s < 8; s++) {
	// pwm.writeMicroseconds(#Pin,(Angle en microseconde + Correction)
  pwm.writeMicroseconds(0,(Pos1[s]+100));   // Doigt AVG
  pwm.writeMicroseconds(4,(Pos4[s]+100));   // Doigt AVD
  pwm.writeMicroseconds(8,(Pos7[s]+100));   // Doigt ARD
  pwm.writeMicroseconds(12,(Pos10[s]+100)); // Doigt ARG
  
  pwm.writeMicroseconds(1,(Pos2[s]+100));   // Bras AVG
  pwm.writeMicroseconds(6,(Pos5[s]+0));     // Bras AVD
  pwm.writeMicroseconds(9,(Pos8[s]+100));   // Bras ARD
  pwm.writeMicroseconds(13,(Pos11[s]+50));  // Bras ARG

  pwm.writeMicroseconds(2,(Pos3[s]+100));   // Epaule AVG
  pwm.writeMicroseconds(5,(Pos6[s]+100));   // Epaule AVD
  pwm.writeMicroseconds(10,(Pos9[s]+100));  // Epaule ARD
  pwm.writeMicroseconds(14,(Pos12[s]+50));  // Epaule ARG
  
  delay(250);
  }
 }