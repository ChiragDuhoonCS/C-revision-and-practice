#include<stdio.h>

int main() {
    int a;
    printf("The age of person is\n");
    scanf("%d", &a);

    if (a>=100)
    {
       printf("You are dead");
    }
    else if(a>=18){
        printf("You can drive\n");
    }
    else if(a<18){
        printf("You are kid");
    }
    return 0;
}