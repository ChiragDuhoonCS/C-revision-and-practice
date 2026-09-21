#include<stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Whats n?\n");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++) {
        sum = sum + (i*n);  // to add all
    }
    {
        printf("%d\n", sum );
    }
    return 0;
}