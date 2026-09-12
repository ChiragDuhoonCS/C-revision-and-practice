#include<stdio.h>
// area of rectangle and take input from users

int main() {
    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The area of reactangle %d", length*breadth);
    return 0;
}
