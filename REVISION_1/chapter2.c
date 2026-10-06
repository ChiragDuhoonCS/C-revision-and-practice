/*
🟡 Merged Problem: Smart Calculator

Write a C program that:

Takes two integers as input.
Prints:
Addition
Subtraction
Multiplication
Division
Modulus
Checks whether each number is Even or Odd
*/
#include <stdio.h>
#include <math.h>

void print1() {
    float a,b;
    scanf("%f %f", &a,&b);
    printf("\nAddition: %0.2f", a+b);
    printf("\nSubtraction: %0.2f", a-b); // fbas for alwaya positive value
    printf("\nMultiplication: %0.2f", a*b);
    printf("\nDivision: %0.2f", a / b);
    printf("\nModulus: %0.2f", fmod(a, b)); // we use math.h coz modulus take int value   modulus means remainder
}
int main() {
    print1();
    return 0;
}