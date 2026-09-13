#include<stdio.h>
// convert celcius into fahrenheit
int main(void) {
    float C;

    printf("The value of celcius is\n");
    scanf("%f", &C);

    printf("The value of Fahrenheit is %f", 1.8*C+ 32);
    return 0;
}