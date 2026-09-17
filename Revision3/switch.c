#include<stdio.h>

int yo() {
    int n;
    int choice;

    printf("Whats value of n: \n");
    scanf("%d",&n);

    printf("Whats your choice: \n");
    scanf("%d",&choice);
    printf("\n");

    switch (choice)
    {
    case 1:
        printf("%d",n+n);
        break;
    
    case 2:
        printf("%d",n*n);
        break;

    case 3:
        printf("%d",n*2);
        break;
    default:
        break;
    }
    
}

int main() {
    yo();
    return 0;
}