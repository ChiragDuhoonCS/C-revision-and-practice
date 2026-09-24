#include<stdio.h>

int temp(int);

int temp(int c){
    printf("The Value of Fehrenheit is %f", (float)(1.8*c + 32));
    return 1.8*c+32;
}

int main(){
    int c;
    scanf("%d", &c);
    temp(c);
}