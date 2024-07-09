#include <Servo.h>

// Definir los servos
Servo servo[4][3]; // 4 patas, cada una con 3 servos (cadera, rodilla, tobillo)

// Ángulos iniciales para cada servo (en grados)
int servoAngles[4][3] = {
  {90, 90, 90},   // Pata 1: cadera 90°, rodilla 90°, tobillo 90°
  {90, 90, 90},   // Pata 2: cadera 90°, rodilla 90°, tobillo 90°
  {90, 90, 90},   // Pata 3: cadera 90°, rodilla 90°, tobillo 90°
  {90, 90, 90}    // Pata 4: cadera 90°, rodilla 90°, tobillo 90°
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
