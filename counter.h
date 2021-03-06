#include "mbed.h"


class Counter {

    public:

        Counter(PinName pin1, PinName pin2);

        void detect();

        int readLeft();
        int readRight();

        void updateLeds();


    private:

        InterruptIn _interruptLeft;
        volatile int _countLeft;

        DigitalIn _digitalInRight;
        volatile int _countRight;

        
        DigitalOut led1;
        DigitalOut led2;
        
};