#include "vt04.h"

//trigger, sensor sx, sensor dx, sensor up, sensor down
VT04 vt(2,5,3,6,4);

void setup() 
{
    Serial.begin(115200);
    vt.init();
    vt.setPeso(1000,1000);
}

void loop()
{
    vt.debug();
}
