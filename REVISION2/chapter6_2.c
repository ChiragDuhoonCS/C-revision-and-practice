#include<stdio.h>

void pointer() {
    int i = 72;
    int *j;
    j = &i;
    printf("Value of j %p\n", j);
    printf("Adress of j %p\n", &j);
    printf("Adress of i %p", *j);
}

int sum(int* a, int* b) {
    *a = 6;
    *b = 8;
    return(*a + *b);
}

int tentimes(int* a) {
    return *a * 10;
}

float avg(float*a,float*b,float*c) {
    return (*a+*b+*c)/3;
}


/*int main() {
    int a;
    scanf("%d", &a);
    printf("Its 10 times is %d",tentimes(&a));
    return 0;
}*/

float main() {
    float a,b,c;
    printf("values are ");
    scanf("%f\n%f\n%f", &a,&b,&c);

    printf("Its average is %f\n", avg(&a,&b,&c));
    printf("Its sum is %f",a+b+c);
}
