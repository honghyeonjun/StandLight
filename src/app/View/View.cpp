#include "View.h"
#include <wiringPi.h>

View::View(Led *led1 ,Led *led2, Led *led3, Led *led4, Led *led5)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4 = led4;
    light5 = led5;

    lightState = LIGHT_OFF;
}

View::~View()
{

}

void View::updateState(std::string strState)
{
    switch (lightState)
    {
        case LIGHT_OFF:
            if (strState == "StateOn1") {
                lightState = LIGHT_ON1;
            }
        break;

        case LIGHT_ON1:
            if (strState == "StateOn2") {
                lightState = LIGHT_ON2;
            }
        break;
        case LIGHT_ON2:
            if (strState == "StateOn3") {
                lightState = LIGHT_ON3;
            }
        break;

        case LIGHT_ON3:
            if (strState == "StateOn4") {
                lightState = LIGHT_ON4;
            }
        break;
        case LIGHT_ON4:
            if (strState == "StateOn5") {
                lightState = LIGHT_ON5;
            }
        break;

        case LIGHT_ON5:
            if (strState == "StateOff") {
                lightState = LIGHT_OFF;
            }
        break;
    }
}


void View::lightView()
{
    switch (lightState)
    {
        case LIGHT_OFF:
            lightOff();
        break;

        case LIGHT_ON1:
            lightOn1();
        break;

        case LIGHT_ON2:
            lightOn2();         
        break;
        case LIGHT_ON3:
            lightOn3();
        break;
        case LIGHT_ON4:
            lightOn4();
        break;
        case LIGHT_ON5:
            lightOn5();
        break;
    }
}

// void View::lightOn()
// {
//     static unsigned int prevTime = 0;
    
//     if (millis() - prevTime < 300) return;
//     prevTime = millis();
//     light->Toggle();
// }

void View::lightOn1()
{
 
    light1->On();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();
}
void View::lightOn2()
{
    light1->On();
    light2->On();
    light3->Off();
    light4->Off();
    light5->Off();
}
void View::lightOn3()
{
    light1->On();
    light2->On();
    light3->On();
    light4->Off();
    light5->Off();
}
void View::lightOn4()
{
    light1->On();
    light2->On();
    light3->On();
    light4->On();
    light5->Off();
}
void View::lightOn5()
{
    light1->On();
    light2->On();
    light3->On();
    light4->On();
    light5->On();
}

void View::lightOff()
{
    light1->Off();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();

}

// void View::lightOn()
// {
//     static unsigned int prevTime = 0;
    
//     if (millis() - prevTime < 300) return;
//     prevTime = millis();
//     light->Toggle();
// }

