#include <stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating point version*/

int main(){

    float fahr=0, cel=0;
    int lower=0, upper=300, step=20;

    fahr = lower;
    while (fahr<= upper){
        cel = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, cel);
        fahr += step;
    }
    return 0;
}