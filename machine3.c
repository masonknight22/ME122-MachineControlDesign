
while (1==1)
{
    biggest = 0;
    while (SensorValue(bumpSwitch) ==0)
    {
        if (SensorValue(potentiometer)>biggest)
        {
            biggest=SensorValue(potentiometer);
        }
    }
}

void LEDControl(); //function declaration

{
    while (1==1)
    {
        LEDControl(); //call function
    }
}
void LEDControl()
{
    if (SensorValue(bumpSwitch)==1)
    {
        turnLEDOn(green);
    }
    else{
        turnLEDOff(green);
    }
}