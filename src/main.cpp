//
// Created by pookie on 08/12/17.
//

#include <Arduino.h>
/*
typedef struct {
    u_int32_t c1;
    u_int32_t c2;
    float f1, f2;
} sensor_data;

void write_serial(u_int8_t *data) {

    for (u_int8_t i = 0; i < 17; i++) {
        Serial.print(data[i]);
    }
    Serial.print('\0');
}*/

int main() {
    pinMode(13, OUTPUT);
    /*u_int8_t dmsg[17] = {1,
                         1, 1, 2, 1,
                         1, 1, 10, 2,
                         0x40, 0xdf, 0xae, 0x14,
                         0x3f, 0xc7, 0xae, 0x14
    };*/
    digitalWrite(13, 1);


    Serial.begin(9600);

    delay(2000);

    while (true) {
        /*  check if data has been sent from the computer: */

        Serial.println("SUUS");


        digitalWrite(13, 0);

        delay(50);


        Serial.println("D");


        digitalWrite(13, 1);

        delay(50);


    }
    return 0;
}