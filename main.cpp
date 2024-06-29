#include "mbed.h"
DigitalOut myled(PC_13);
//pull antes de push
int main(){
    while (true)
    {
        // cambio algunas cosas
        myled = 1;
        wait_us(500000);
        myled = 0;
        wait_us(1000000);
        //guardar cambios
        //haciendo comentario
    }
}