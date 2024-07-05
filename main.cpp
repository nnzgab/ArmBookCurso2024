#include "mbed.h"


#rama1


#define LED1	PA_7
#define	LED2	PB_1
#define	LED3	PB_10
#define	LED4	PB_12
#define	LED5	PB_14
#define	LED6	PA_8
#define	LED7	PA_12
#define	LED8	PF_7
#define	LED9	PA_6
#define	LED10	PB_0
#define	LED11	PB_2
#define	LED12	PB_11
#define	LED13	PB_13
#define	LED14	PB_12
#define	LED15	PA_11
#define	LED16	PF_6

#define ON 1
#define OFF !ON
DigitalOut ledZona1(LED1);
DigitalOut ledZona2(LED2);
DigitalOut ledZona3(LED3);
DigitalOut ledZona4(LED4);
DigitalOut ledZona5(LED5);
DigitalOut ledZona6(LED6);
DigitalOut ledZona7(LED7);
DigitalOut ledZona8(LED8);
DigitalOut ledZona9(LED9);
DigitalOut ledZona10(LED10);
DigitalOut ledZona11(LED11);
DigitalOut ledZona12(LED12);
DigitalOut ledZona13(LED13);
DigitalOut ledZona14(LED14);
DigitalOut ledZona15(LED15);
DigitalOut ledZona16(LED16);


#DigitalOut myled(PC_13);
//pull antes de push
int main(){
    while (true)
    {
        // cambio algunas cosas
        ledZona1 = ON;
        wait_us(500000);
        ledZona1 = OFF;
    	wait_us(500000);
    	
    	ledZona1 = ON;
        wait_us(500000);
        ledZona1 = OFF;
    	wait_us(500000);
    	
    	ledZona1 = ON;
        wait_us(500000);
        ledZona1 = OFF;
    	wait_us(500000);
    	
    	ledZona1 = ON;
        wait_us(500000);
        ledZona1 = OFF;
    	wait_us(500000);
    	
    	ledZona1 = ON;
        wait_us(500000);
        ledZona1 = OFF;
    	wait_us(500000);
    	
    	ledZona1 = ON;
        wait_us(500000);
        ledZona1 = OFF;
    	wait_us(500000);
    	
    	ledZona1 = ON;
        wait_us(500000);
        ledZona1 = OFF;
    	wait_us(500000);
    	
    	ledZona8 = ON;
        wait_us(500000);
        ledZona8 = OFF;
    	wait_us(500000);
        
    }
}
