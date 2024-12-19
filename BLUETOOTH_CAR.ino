#include <AFMotor.h>
#include <SoftwareSerial.h>

SoftwareSerial HC05(9, 10); // RX, TX

// Initializing motors
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

char command;

void setup()
{
  HC05.begin(9600);  // Set baud rate to Bluetooth module
  Serial.begin(9600); // Debugging via Serial Monitor
}

void loop()
{
  if (HC05.available() > 0)
  {
    command = HC05.read();
    Serial.print("Command Received: ");
    Serial.println(command); // Debug received command

    Stop(); // Start with motors stopped

    switch (command)
    {
      case 'F':
        forward();
        break;
      case 'B':
        back();
        break;
      case 'L':
        left();
        break;
      case 'R':
        right();
        break;
    }
  }
}

void forward()
{
  motor1.setSpeed(180); // Reduced speed for power conservation
  motor1.run(FORWARD);
  motor2.setSpeed(180);
  motor2.run(FORWARD);
  motor3.setSpeed(180);
  motor3.run(FORWARD);
  motor4.setSpeed(180);
  motor4.run(FORWARD);
}

void back()
{
  motor1.setSpeed(180);
  motor1.run(BACKWARD);
  motor2.setSpeed(180);
  motor2.run(BACKWARD);
  motor3.setSpeed(180);
  motor3.run(BACKWARD);
  motor4.setSpeed(180);
  motor4.run(BACKWARD);
}

void left()
{
  motor1.setSpeed(180);
  motor1.run(FORWARD);
  motor2.setSpeed(100); // Lower speed for turning
  motor2.run(FORWARD);
  motor3.setSpeed(180);
  motor3.run(FORWARD);
  motor4.setSpeed(100); // Lower speed for turning
  motor4.run(FORWARD);
}

void right()
{
  motor1.setSpeed(100);
  motor1.run(FORWARD);
  motor2.setSpeed(180);
  motor2.run(FORWARD);
  motor3.setSpeed(100);
  motor3.run(FORWARD);
  motor4.setSpeed(180);
  motor4.run(FORWARD);
}

void Stop()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
