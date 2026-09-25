#include<stdio.h>

int force(int);

int force(int m){
    printf("The Value of Force is %f", (float)(m*9.8));
    return m*9.8;
}

int main(){
    int m;
    scanf("%d", &m);
    force(m);
}