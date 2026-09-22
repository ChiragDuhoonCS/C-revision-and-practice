#include<stdio.h>

int main() {
    int n;

    printf("Whats n?\n");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {
        printf("%d\n", i*n);
    }
    return 0;
}