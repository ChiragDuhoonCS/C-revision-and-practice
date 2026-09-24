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
    printf("Find a: \n");
    scanf("%d",&a);

    printf("Find b: \n");
    scanf("%d",&b);

    sum(a,b);
    sub(a,b);
    multiply(a,b);
    divide(a,b);
    module(a,b);

    printf("Sum: %d",sum);
    printf("Sum: %d",sub);
    printf("Sum: %d",mul);
    printf("Sum: %d",sum);
    printf("Sum: %d",sum);
}