#include<stdio.h>

//we can change value of input by pointer unlike functions
int sum(int*, int*);

int sum(int* a, int* b){
    *a = 6;
    *b = 9;   // these values go there
    return (*a + *b);
}

int main() {
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y)); // we change value here 
    printf("The value of x is %d", x);
    return 0;
}