#include "counter.h"


Counter::Counter(PinName pin1, PinName pin2) : _interruptLeft(pin1), _digitalInRight(pin2) {        // create the InterruptIn on the pin specified to Counter
    _interruptLeft.rise(callback(this, &Counter::detect)); // attach increment function of this counter instance
    _countLeft = _countRight = 0;
}

void Counter::detect() {
    
    if(_digitalInRight == 1){
        _countLeft++;
    } else {
        _countRight++;
    }
}

int Counter::readLeft() {
    return _countLeft;
}

int Counter::readRight() {
    return _countRight;
}

        
