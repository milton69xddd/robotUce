#include <Servo.h>

// Definir los servos
Servo servo[4][3]; // 4 patas, cada una con 3 servos (cadera, rodilla, tobillo)

const int servo_pin[4][3] = {
  {2, 3, 4},   // Pata 1: servo 2 (cadera), servo 3 (rodilla), servo 4 (tobillo)
  {5, 6, 7},   // Pata 2: servo 5 (cadera), servo 6 (rodilla), servo 7 (tobillo)
  {8, 9, 10},  // Pata 3: servo 8 (cadera), servo 9 (rodilla), servo 10 (tobillo)
  {11, 12, 13} // Pata 4: servo 11 (cadera), servo 12 (rodilla), servo 13 (tobillo)
};
void setup() {
  // Inicializar los servos
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      servo[i][j].attach(pin);  // Sustituye 'pin' por el pin correspondiente de cada servo
      servo[i][j].write(servoAngles[i][j]);
    }
  }
}

void loop() {
}
