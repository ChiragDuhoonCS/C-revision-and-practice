/*
Create a factorial() function using recursion.
Create an evenOdd() function.
Take n from the user in main().
Print both results.*/
#include <stdio.h>

void function1() {
    int n;
    double factorial = 1;

    printf("Yo whats n: ");
    scanf("%d", &n);

    printf("=======================\n");

    for (int i = n; i > 0; i--) {
        factorial = factorial * i;
    }

    printf("Factorial: %.0lf\n", factorial);
    printf("=======================\n");
}

int main() {
    function1();
    return 0;
}
