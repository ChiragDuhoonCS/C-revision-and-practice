#include<stdio.h>

int main(){
    int a;
    printf("the age is\n");
    scanf("%d", &a);

    if(a>=18) { //see here =
        printf("you can drive\n");
    }
    else {
        printf("you cannot drive");
    }
    return 0;
}