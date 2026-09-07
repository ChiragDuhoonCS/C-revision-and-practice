/*
Write a C program that takes 10 integers in an array and:

Print all elements
Find the largest and smallest element
Calculate the sum and average
Search for a number entered by the user and print its index if found

Requirement: Use an array and loops. No separate functions.*/

#include <stdio.h>

void function1() {
    int n;
    int arr[10];

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    // Limit input to array capacity
    if (n > 10) {
        n = 10;
    }

    // Input loop
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Output loop
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void function2() {
    char ch;
    int n;
    char array[30];

    printf("Enter value of n: \n");
    scanf("%d", &n);

    if (n > 30) {
        n = 30;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Students Name: ");
        scanf("%s", &ch);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%s", array[i]);
    }
    printf("\n");
    
}


int main() {
    function2();
    return 0;
} 