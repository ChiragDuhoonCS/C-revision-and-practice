/*
Write a C program that takes two integers and uses pointers to:

Print their values
Print their addresses
Find the larger number using pointer dereferencing
Swap the two numbers using pointers

Requirement: Perform the swap through a separate swap() function using pointers.*/

#include<stdio.h>

void swap(int *i, int *n) {
    int temp = *i;
    *i = *n;
    *n = temp;
}

void function1() {
    int i;
    int n;
    int *k;
    k = &n;
    int *j;
    j = &i;

    printf("Whats value of i: \n");
    scanf("%d", &i);

    printf("Whats value of n: \n");
    scanf("%d", &n);

    printf("\nYour i value is %d",i);
    printf("\nYour n value is %d",n);
    printf("\nYour i location is %d",j);
    printf("\nYour n location is %d",k);
    swap(&i, &n);
    printf("\nYour n location is %d", n);
    
}

int main() {
    function1();
    return 0;
}