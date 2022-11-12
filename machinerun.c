#pragma config(Sensor,dgtl1,bumpSwitch,sensorTouch)
#pragma config(Sensor,dgtl2, sonar,sensorSONAR_inch)
#pragma config(Sensor,dgtl11, green,sensorLEDtoVCC)
//*!!Code ROBOTC configuration Wizard

task main()
{
    int valTime1, valTime10, valTime100;
        untilSonarLessThan(10,dgtl2);
        writeDebugStreamLine("int x is:%d", valTime1=time1[T1]);
        clearTimer (T1);
        turnLEDOn(dgtl11);
        wait10Msec(10);
        turnLEDOff(dgtl11);
        untilSonarLessThan(20, dgtl2);
        valTime1=time1[T1];
        valTime10=time10[T1];
        valTime100=time100[T1];
        turnLEDOn(dgtl11);
        wait10Msec(10);
        turnLEDOff(dgtl11);
}


#pragma config(Sensor,dgtl1,bumpSwitch,sensorTouch)
#pragma config(Sensor,dgtl2, sonar,sensorSONAR_inch)
#pragma config(Sensor,dgtl11, green,sensorLEDtoVCC)

task main()
{
    while(1==1)
    {
        robotType(recbot);
        clearTimer)T1);
        while(time1[T1]<5000)
        {
            forward(80);
            untilTouch();
            stop()

            pointTurn(right, 100);
            wait(1);
            stop();
        }
    }
}