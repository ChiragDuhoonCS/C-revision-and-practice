#include<stdio.h>

// do loop atleast run one time even condition does not meet
// for and while loop check condition first

int main() {
    int n;
    int i = 0; // only this if no input by user

    printf("Whats n?\n");
    scanf("%d", &n);

    do
    {
        printf("Meow\n");
        i++;
    } while (i < n
    );
    return 0;
}