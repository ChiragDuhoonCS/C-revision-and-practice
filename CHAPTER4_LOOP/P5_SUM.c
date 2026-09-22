#include<stdio.h>

int main() {
    int sum = 0; // for sum' multiply, division, subsctract

    for (int i = 1; i < 11; i++) {
        sum = sum + i;
    }
    {
        printf("%d\n", sum );
    }
    return 0;
}