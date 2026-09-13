#include<stdio.h>
// find simple interest  here multiple input

int main(){
    float p,r,t; //see here multiple define

    printf("The value of Principal\n");
    scanf("%f", &p);

    printf("The value of Rate\n");
    scanf("%f", &r);

    printf("The value of Time\n");
    scanf("%f", &t);

    printf("The Simple Interest is %f", (p*r*t)/100);
    return 0;
}