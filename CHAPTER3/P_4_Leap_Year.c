#include<stdio.h>

int main() {
    int a;

    printf("What,s the year\n");
    scanf("%d", &a);

    if (a % 4 == 0)
    {
        printf("It,s a leap Year");
    }
    else 
    {
        printf("It,s not a leap Year");
    }
    return 0;
}