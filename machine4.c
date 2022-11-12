
untilBump(bumpSwitch);
startMotor(rightMotor, 63);
wait(5);
stopMotor(rightMotor);

turnLEDOn(green);
untilPotentiometerGreaterThan(2048, potentiometer);
turnLEDOff(green);
startMotor(leftMotor, 63);
wait(3.5);
stopMotor(leftMotor);

startMotor(leftMotor, 63);
startMotor(rightMotor, 63)
untilEncoderCounts(480,quad);
stopMotor(leftMotor);
stopMotor(rightMotor);

setServo(servoMotor, 127);
untilLight(1425, lineFollower);
setServo(servoMotor, -127);
wait(2);

startMotor(leftMotor, 63);
startMotor(rightMotor, 63);
untilSonarLessThan(20, sonar);
stopMotor(leftMotor);
stopMotor(rightMotor);
turnLEDOn(green);
wait(6.25);
turnLEDOff(green);