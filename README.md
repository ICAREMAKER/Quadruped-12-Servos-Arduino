# Quadruped-12-Servos-Arduino

![PCA9685](https://github.com/user-attachments/assets/1c1ff992-436c-489c-8b16-f4a543172447)

## Pattern
### STARTER()

```C
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
```

### DEBOUT()
```C
void DEBOUT() {
	// pwm.writeMicroseconds(#Pin,(Angle en microseconde + Correction))
  pwm.writeMicroseconds(0,(2000+100));  // Doigt AVG
  delay(100);
  pwm.writeMicroseconds(1,(2000+100));  // Bras AVG
  delay(100);
  pwm.writeMicroseconds(2,(2000+150));  // Epaule AVG
  delay(100);
  pwm.writeMicroseconds(4,(1000+100));  // Doigt AVD
  delay(100);
  pwm.writeMicroseconds(6,(1000+0));    // Bras AVD
  delay(100);
  pwm.writeMicroseconds(5,(1000+50));  // Epaule AVD
  delay(100);
  pwm.writeMicroseconds(8,(2000+100));  // Doigt ARD
  delay(100);
  pwm.writeMicroseconds(9,(2000+100));  // Bras ARD
  delay(100);
  pwm.writeMicroseconds(10,(2000+150)); // Epaule ARD
  delay(100);
  pwm.writeMicroseconds(12,(1000+100)); // Doigt ARG
  delay(100);
  pwm.writeMicroseconds(13,(1000+50));  // Bras ARG
  delay(100);
  pwm.writeMicroseconds(14,(1000+50));  // Epaule ARG
  delay(100);
  }
```
### ANIMATION1()
```C
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
```
### COUCOU()
```C
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
```

### COUCOU_2()
```C
void COUCOU_2()
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
int Pos1[8] = {2000, 1000, 1000, 1000, 1000, 1000, 1000, 2000};  // Doigt AVG
int Pos2[8] = {2000, 1000, 1000, 1000, 1000, 1000, 1000, 2000};  // Bras AVG
int Pos3[8] = {1500, 1500, 2000, 1000, 2000, 1000, 1500, 1500};  // Epaule AVG
    // Patte avant droite
int Pos4[8] = {1000, 2000, 2000, 2000, 2000, 2000, 2000, 1000};  // Doigt AVD
int Pos5[8] = {1000, 2000, 2000, 2000, 2000, 2000, 2000, 1000};  // Bras AVD
int Pos6[8] = {1500, 1500, 1000, 2000, 1000, 2000, 1500, 1500};  // Epaule AVD
	// Patte arriere droite
int Pos7[8] = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Doigt ARD
int Pos8[8] = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Bras ARD
int Pos9[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500};  // Epaule ARD
    // Patte arriere gauche
int Pos10[8] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000}; // Doigt ARG
int Pos11[8] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000}; // Bras ARG
int Pos12[8] = {1500, 1500, 1500, 1500, 1500, 1500, 1500, 1500}; // Epaule ARG



for (int s = 0; s < 8; s++) {
	// pwm.writeMicroseconds(#Pin,(Angle en microseconde + Correction))
  pwm.writeMicroseconds(0,(Pos1[s]+100));   // Doigt AVG
  pwm.writeMicroseconds(4,(Pos4[s]+100));   // Doigt AVD
  pwm.writeMicroseconds(8,(Pos7[s]+100));   // Doigt ARD
  pwm.writeMicroseconds(12,(Pos10[s]+100)); // Doigt ARG
  
  pwm.writeMicroseconds(1,(Pos2[s]+100));   // Bras AVG
  pwm.writeMicroseconds(6,(Pos5[s]+0));     // Bras AVD
  pwm.writeMicroseconds(9,(Pos8[s]+100));   // Bras ARD
  pwm.writeMicroseconds(13,(Pos11[s]+50));  // Bras ARG

  pwm.writeMicroseconds(2,(Pos3[s]+150));   // Epaule AVG
  pwm.writeMicroseconds(5,(Pos6[s]+50));   // Epaule AVD
  pwm.writeMicroseconds(10,(Pos9[s]+150));  // Epaule ARD
  pwm.writeMicroseconds(14,(Pos12[s]+50));  // Epaule ARG
  
  delay(250);
  }
 }
```
### TOURNER A GAUCHE: A_GAUCHE()
```C
void A_GAUCHE()
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
int Pos1[10] = {2000, 2000, 2000, 2000, 2500, 2000, 2000, 2000, 2000, 2000};  // Doigt AVG
int Pos2[10] = {2000, 2000, 2000, 2000, 1500, 2000, 2000, 2000, 2000, 2000};  // Bras AVG
int Pos3[10] = {2000, 2000, 2000, 2000, 1750, 1500, 1500, 1500, 1750, 2000};  // Epaule AVG
    // Patte avant droite
int Pos4[10] = {1000, 1000,  500, 1000, 1000, 1000, 1000, 1000, 1000, 1000};  // Doigt AVD
int Pos5[10] = {1000, 1000, 1500, 1000, 1000, 1000, 1000, 1000, 1000, 1000};  // Bras AVD
int Pos6[12] = {1000, 1000,  750,  500,  500,  500,  500,  500,  750, 1000};  // Epaule AVD
	// Patte arriere droite
int Pos7[10] = {2500, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Doigt ARD
int Pos8[10] = {1500, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Bras ARD
int Pos9[10] = {1750, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1750, 2000};  // Epaule ARD
    // Patte arriere gauche
int Pos10[10] = {1000, 1000, 1000, 1000, 1000, 1000,  500, 1000, 1000, 1000}; // Doigt ARG
int Pos11[10] = {1000, 1000, 1000, 1000, 1000, 1000, 1500, 1000, 1000, 1000}; // Bras ARG
int Pos12[10] = {1000, 1000, 1000, 1000, 1000, 1000,  750,  500,  750, 1000}; // Epaule ARG



for (int s = 0; s < 10; s++) {
	// pwm.writeMicroseconds(#Pin,(Angle en microseconde + Correction))
  pwm.writeMicroseconds(0,(Pos1[s]+100));   // Doigt AVG
  pwm.writeMicroseconds(4,(Pos4[s]+100));   // Doigt AVD
  pwm.writeMicroseconds(8,(Pos7[s]+100));   // Doigt ARD
  pwm.writeMicroseconds(12,(Pos10[s]+100)); // Doigt ARG
  
  pwm.writeMicroseconds(1,(Pos2[s]+100));   // Bras AVG
  pwm.writeMicroseconds(6,(Pos5[s]+0));     // Bras AVD
  pwm.writeMicroseconds(9,(Pos8[s]+100));   // Bras ARD
  pwm.writeMicroseconds(13,(Pos11[s]+50));  // Bras ARG

  pwm.writeMicroseconds(2,(Pos3[s]+150));   // Epaule AVG
  pwm.writeMicroseconds(5,(Pos6[s]+50));   // Epaule AVD
  pwm.writeMicroseconds(10,(Pos9[s]+150));  // Epaule ARD
  pwm.writeMicroseconds(14,(Pos12[s]+50));  // Epaule ARG
  
  delay(250);
  }
 }
 ```

### TOURNER A DROITE: A_DROITE()
```C
void A_DROITE()
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
int Pos1[10] = {2000, 2000, 2500, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Doigt AVG
int Pos2[10] = {2000, 2000, 1500, 2000, 2000, 2000, 2000, 2000, 2000, 2000};  // Bras AVG
int Pos3[10] = {2000, 2000, 2250, 2500, 2500, 2500, 2500, 2500, 2250, 2000};  // Epaule AVG
  // Patte avant droite
int Pos4[10] = {1000, 1000, 1000, 1000,  500, 1000, 1000, 1000, 1000, 1000};  // Doigt AVD
int Pos5[10] = {1000, 1000, 1000, 1000, 1500, 1000, 1000, 1000, 1000, 1000};  // Bras AVD
int Pos6[12] = {1000, 1000, 1000, 1000, 1250, 1500, 1500, 1500, 1250, 1000};  // Epaule AVD
	// Patte arriere droite
int Pos7[10] = {2000, 2000, 2000, 2000, 2000, 2000, 2500, 2000, 2000, 2000};  // Doigt ARD
int Pos8[10] = {2000, 2000, 2000, 2000, 2000, 2000, 1500, 2000, 2000, 2000};  // Bras ARD
int Pos9[10] = {2000, 2000, 2000, 2000, 2000, 2000, 2250, 2500, 2250, 2000};  // Epaule ARD
  // Patte arriere gauche
int Pos10[10] = { 500, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000}; // Doigt ARG
int Pos11[10] = {1500, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000}; // Bras ARG
int Pos12[10] = {1250, 1500, 1500, 1500, 1500, 1500, 1500, 1500, 1250, 1000}; // Epaule ARG



for (int s = 0; s < 10; s++) {
	// pwm.writeMicroseconds(#Pin,(Angle en microseconde + Correction))
  pwm.writeMicroseconds(0,(Pos1[s]+100));   // Doigt AVG
  pwm.writeMicroseconds(4,(Pos4[s]+100));   // Doigt AVD
  pwm.writeMicroseconds(8,(Pos7[s]+100));   // Doigt ARD
  pwm.writeMicroseconds(12,(Pos10[s]+100)); // Doigt ARG
  
  pwm.writeMicroseconds(1,(Pos2[s]+100));   // Bras AVG
  pwm.writeMicroseconds(6,(Pos5[s]+0));     // Bras AVD
  pwm.writeMicroseconds(9,(Pos8[s]+100));   // Bras ARD
  pwm.writeMicroseconds(13,(Pos11[s]+50));  // Bras ARG

  pwm.writeMicroseconds(2,(Pos3[s]+150));   // Epaule AVG
  pwm.writeMicroseconds(5,(Pos6[s]+50));   // Epaule AVD
  pwm.writeMicroseconds(10,(Pos9[s]+150));  // Epaule ARD
  pwm.writeMicroseconds(14,(Pos12[s]+50));  // Epaule ARG
  
  delay(250);
  }
 }
 ```
