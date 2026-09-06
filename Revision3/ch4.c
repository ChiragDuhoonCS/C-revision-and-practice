/*
Write a C program that takes an integer n and:

Print all numbers from 1 to n
Print the sum of those numbers
Print how many numbers are even
Print how many numbers are odd*/

#include<stdio.h>

void program1() {
    int n;
    
    printf("Whats n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
}


void program2() {
    int n;
    int sum;
    
    printf("Whats n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    sum = sum + i;
    {
        printf("%d\n",sum);
    }
    
}

void program3() {
    int n;
    
    printf("Whats n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
      if (i%2 == 0)
      {
        printf("%d is even\n",i);
      }
      else{
        printf("%d is odd\n",i);
      } 
      
    }
    
}

int main() {
    program3();
    return 0;
}