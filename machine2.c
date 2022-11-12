
turnLEDOff(green);
wait(1);
turnLEDOn(green);
wait(1);
turnLEDOff(green);
wait(1);
turnLEDOn(green);
wait(1);
turnLEDOff(green);

setServo(servoMotor, -127);
wait(2);
setServo(servoMotor, 0);
wait(2);
setServo(servoMotor, 127);
wait(2);

startMotor(leftMotor, 127);
startMotor(rightMotor, 127);
wait(1);
stopMotor(leftMotor);
stopMotor(rightMotor);

turnLEDOff(green);
wait(1);
turnLEDOn(green);
wait(1);
turnLEDOff(green);
wait(1);
turnLEDOn(green);
wait(1);
turnLEDOff(green);

setServo(servoMotor, -127);
wait(2);
setServo(servoMotor, 0);
wait(2);
setServo(servoMotor, 127);
wait(2);
