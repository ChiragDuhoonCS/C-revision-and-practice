#include<stdio.h>

int main() {
    int a,b,c,d;

    printf("Whats the number:\n");
    scanf("%d %d %d %d, &a, &b, &c, &d");

    if (a >= b && a >= c && a >= d)
       printf("%d Its Greatest");
    else if (b >= a && b >= c && b >= d)
       printf("%d The Greatest");
    else if (c >=a && c >= b && c >= d)
       printf("%d The Greatest");
    else if (d >= a && d >= b && d >= c)
       printf("%d The Greatest");
    
    return 0;
}