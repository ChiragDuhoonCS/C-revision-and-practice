#include<stdio.h>

/* i = 72 this value going to save in ram on some address
we put that adress in j and j also have some address 
let i address is 87994 and j adresss is 87998
&i means address of   that is 87994
*j means value at address is that is 72
*& cancel each other*/
int main() {
    int i = 72;
    int *j; // int **k  k = &j   pointer to pointer
    j = &i;
    printf("add i at  %u\n", j);  // use %p instead of %u
    printf("add j at %u\n ", &j);
}