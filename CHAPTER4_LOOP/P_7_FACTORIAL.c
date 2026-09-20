#include<stdio.h>

int main() {
    int n;
    int factorial = 1;

    printf("Whats n?\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
        factorial = (factorial*i); // i did mistake here multiple time
    
    {
        printf("%d\n", factorial);
    }
    return 0;
}