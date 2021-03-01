#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led3(LED3);

int main()
{
    while (true) {
        for (int i = 0; i < 3; i++) {
            led3 = 1;
            led1 = 0;
            ThisThread::sleep_for(100ms);
            led3.write(0);
            led1.write(0);
            ThisThread::sleep_for(100ms);
        }
        for (int i = 0; i < 2; i++) {
            led3 = 0;
            led1 = 1;
            ThisThread::sleep_for(100ms);
            led3.write(0);
            led1.write(0);
            ThisThread::sleep_for(100ms);
        }

    }
}