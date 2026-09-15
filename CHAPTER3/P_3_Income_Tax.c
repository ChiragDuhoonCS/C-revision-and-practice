#include<stdio.h>

int main() {
    float i;

    printf("Income Tax is\n");
    scanf("%f", &i);

    if (i>10)
    {
        printf("You have to pay 30\n");
    }
    else if (i>=5) {
        printf("You have to pay 20\n");
    }
    else if (i>=2.5) {
        printf("You have to pay 5\n");
    }
    else 
    printf("You don't have to pay tax\n");

    return 0;
}