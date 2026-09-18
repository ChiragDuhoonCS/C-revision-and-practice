#include<stdio.h>

int main() {
    int i = 67;
    int*j;
    j = &i;
    int**k;
    k = &j;

    printf("i placed at %u\n", j);
    printf("i value is %d\n", *j);
    printf("j placed at %u\n", k );
    printf("k placed at %u\n", &k);
    printf("value of j is %d\n", &i);

} // it covers problem 1, 2, 6