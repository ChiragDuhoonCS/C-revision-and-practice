#include<stdio.h>

int sum(int a,int b) {
    return a+b;
}

int sub(int a,int b) {
    return a-b;
}

int multiply(int a,int b) {
    return a*b;
}

int divide(int a,int b) {
    return a/b;
}

int module(int a,int b) {
    return a%b;
}

int main() {
    int a,b;
    printf("Find a: ");
    scanf("%d",&a);

    printf("\n");

    printf("Find b: ");
    scanf("%d",&b);

    sum(a,b);
    sub(a,b);
    multiply(a,b);
    divide(a,b);
    module(a,b);

    printf("============================\n");

    printf("Sum: %d\n", sum(a, b));
    printf("Sub: %d\n", sub(a, b));
    printf("Multiply: %d\n", multiply(a, b));
    printf("Divide: %d\n", divide(a, b));
    printf("Module: %d\n", module(a, b));
}