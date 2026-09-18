#include<stdio.h>
int p1() {
    int factorial = 1;
    int n;
    for (int i = 1; i <= 5; i++){
    factorial = factorial*i;}
    
        printf("%d",factorial);
    
    return 0;
    
}

int p2() {
    int n;

    printf("Enter number till you want to find out prime number: ");
    scanf("%d",&n);


    for (int i = 2; i <= n; i++)
    {
        int prime = 0;
        for (int j = 2; j <= i-1; j++)
        {
            prime = i % j;
        
        if (prime == 0)
        
            break;
        }
        if (prime != 0) {
            printf("%d is prime number\n",i);
        }
    }

}

int p4() {
    int n;
    int prime;
    printf("Enter number you want to find it is prime number or not: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        prime = n%i;
        if (prime == 0)
         printf("%d isnt prime\n",n);
        else  {
            printf("%d is prime number\n",n);
        }    
    }
    

}



int main() {
    p2();
    return 0;

}