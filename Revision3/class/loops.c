#include<stdio.h>

int p1() {
 for (int i = 6; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
        printf("*");
    }

    printf("\n");
    
  }
  
}

int p2() {
    int num =1;
 for (int i = 1; i <= 6; i++)
  {
    for (int j = 1; j <= i; j++)
    {
        printf("%d",num);
        num ++;
    }

    printf("\n");
    
  }
  
}

int p3() {
    int factorial = 1;
    int n;
    for (int i = 1; i <= 5; i++){
    factorial = factorial*i;}
    
        printf("%d",factorial);
    
    return 0;
    
}
int main() {
    p3();
    return 0;

}
