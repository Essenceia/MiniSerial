//
// Created by pookie on 08/12/17.
//

#include "Arduino.h"
typedef struct{
    u_int32_t c1;
    u_int32_t c2;
    float f1,f2;
}sensor_data;

void write_serial(sensor_data *data){
    Serial.print(data->c1);
    Serial.print(data->c2);
    Serial.print(data->f1);
    Serial.print(data->f2);
}
int main(){
    sensor_data data = { .c1 = 1, .c2 = 2 , .f1 =3 , .f2 =4};
    Serial.begin(9600);
    while(true) {
        /*  check if data has been sent from the computer: */
        if (Serial.available()) {
            delay(2000);
            write_serial(&data);
        }
    }
    return 0;
}