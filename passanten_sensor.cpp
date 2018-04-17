#include "passanten_sensor.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int PassantenTeller::getDirection(){
    srand(time(NULL));
    int randomValue = rand() %2;
    
    int direction = 0x00;
    if (randomValue == 0){
        direction = 0xFF;
    }

    return direction;
}


int PassantenTeller::getAmountOfVehicules(){
    srand(time(NULL));
    int amountOfVehicules = rand() %500;
    
    return amountOfVehicules;
}