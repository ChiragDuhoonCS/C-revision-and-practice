#include<stdio.h>

int main() {
    int number[] = {0,1,2,3,4,5,6,7,8,9};
    int* ptr = number;



    printf("1st number is %d and 3rd number is %d", *ptr, *ptr+2);
    return 0;
}