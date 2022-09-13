#ifndef __VIEW_H__
#define __VIEW_H__

#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_ON1,LIGHT_ON2,LIGHT_ON3,LIGHT_ON4,LIGHT_ON5};

class View
{
private:
    int lightState;
    Led *light1 , *light2, *light3, *light4, *light5;

public:
    View(Led *led1 ,Led *led2, Led *led3, Led *led4, Led *led5);
    virtual ~View();
    void lightView();
    void updateState(std::string strState);
    void lightOn1();
    void lightOn2();
    void lightOn3();
    void lightOn4();
    void lightOn5();
    
    void lightOff();
};

#endif /* __VIEW_H__ */