#include "edge.h"

bool edge::function_detect(uint8_t times){
    uint8_t times_inside = 1;
    do{
        // if(edge_incide)
    }while(times_inside<times);

    // while(times_inside<=times){
    // }
}

bool function_detect(uint8_t times,uint8_t mode){

}


edge::edge(PinName pin){
    DigitalIn edge_incide(pin);
    this->pin = pin;
}

edge::~edge(){

}
