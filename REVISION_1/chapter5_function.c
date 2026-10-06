/*
=========== BANK MENU ===========

1. Deposit Money
2. Withdraw Money
3. Check Balance
4. Calculate Simple Interest
5. Calculate Compound Interest
6. Find Maximum of Two Numbers
7. Find Maximum of Three Numbers
8. Check Even/Odd
9. Check Prime Number
10. Find Factorial
12. Exit

Enter your choice:*/

#include<stdio.h>

int sinterest(int p, int r, int t);
int A = 'p(1+r/100)';


int sinterest(int p, int r, int t) {
    printf("Simple Interest: %0.2f", (p*r*t)/100);
    return (p*r*t)/100;
}

int cinterest(int p, int r, int t) {
    printf("Compound Interest: %0.2f", A-(p*r*t)/100 );
    return A - (p*r*t)/100;
}
