#include<stdio.h>

void calculator() {
    int a,b;
    int sum,sub,multi,divide;
    int factorial_a = 1;
    int factorial_b = 1;

    printf("Whats the value of a: ");
    scanf("%d", &a);

    printf("\nWhats the value of b: ");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    multi = a*b;
    divide = a/b;
    
    printf("==================RESULT====================\n");
    printf("Our addition of %d and %d is %d\n", a , b, sum);
    printf("Our sub of %d and %d is %d\n", a , b, sub);
    printf("Our multi of %d and %d is %d\n", a , b, multi);
    
    printf("Factorail of %d is  ",a);
    for (int i = a; i > 0; i--){
     factorial_a = factorial_a * i;
        printf("%d", factorial_a);
    }
    
    printf("\nFactorail of %d is  ",b);
    for (int i = b; i > 0; i--){
     factorial_b = factorial_b * i;
    
        printf("%d", factorial_b);
    }
    

}

int main() {
    calculator();
    return 0;
}

