#include<stdio.h>

int avg(int*,int*);

int avg(int*a, int*b) {
    return (*a + *b)/2;
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("The sum is %d and average is %f", a+b, (float)(avg(&a,&b)));
    return 0;
}