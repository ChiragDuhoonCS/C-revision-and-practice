#include<stdio.h>

//we can change value of input by pointer unlike functions
int sum(int*, int*);

int sum(int* a, int* b){
    *a = 6;
    *b = 9;   // these values go there
    return (*a + *b);
}

int main(