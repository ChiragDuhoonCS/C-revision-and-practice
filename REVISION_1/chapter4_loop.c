/*
========== NUMBER UTILITY SYSTEM ==========

1. Print numbers from 1 to N
2. Print numbers from N to 1
3. Print multiplication table
4. Sum of first N natural numbers
5. Factorial of a number
6. Count digits
7. Reverse a number
8. Print all factors of a number
9. Find GCD (HCF) of two numbers
10. Find LCM of two numbers
11. Armstrong Number Check (3-digit)
12. Exit

Enter your choice:*/

#include<stdio.h>

void print1() {
    int n;
    int sum = 0;
    scanf("%d", &n);

    // from 1 to n
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    
    printf("\n");

    // from n to 1
    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }

    printf("\n");
     
  //Print multiplication table
  for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i*n);
    }
    
    printf("\n");

 // Sum of first N natural numbers
 for (int i = 1; i <= n; i++){
    sum = sum + i;
 }
    {
        printf("%d ", sum);
    }

    
}
int main(int n) {
    print1();
    return 0;
}