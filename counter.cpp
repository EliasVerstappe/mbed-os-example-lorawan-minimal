#include "counter.h"


Counter::Counter(PinName pin1, PinName pin2) : _interruptLeft(pin1), _digitalInRight(pin2), led1(LED1), led2(LED2) {        // create the InterruptIn on the pin specified to Counter
    _interruptLeft.rise(callback(this, &Counter::detect)); // attach increment function of this counter instance
    _countLeft = _countRight = 0;
}

void Counter::detect() {
     led1 = 1;
     led2 = 1;

    if(rand() % 2){
        _countLeft++;
    } else {
        _countRight++;
    }
}

int Counter::readLeft() {
    // led1 = led2 = 0;
    return _countLeft;

}

int Counter::readRight() {
    // led1 = led2 = 0;
    return _countRight;
}

void Counter::updateLeds(){
    //led1 = _interruptLeft.read();
    //led2 = _digitalInRight.read();
    //printf("%d\r\n", _digitalInRight);
}
        
