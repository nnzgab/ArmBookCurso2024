#include "mbed.h"
DigitalOut myled(PC_13);

int main(){
    while (true)
    {
        myled = 1;
        wait_us(500000);
        myled = 0;
        wait_us(1000000);
    }
}