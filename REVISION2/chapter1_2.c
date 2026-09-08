#include<stdio.h>


void function1() {  //!  SEE HERE  VOID
    printf("Code to check print");
}

void function2() {
    int a;
    printf("Whats a?\n");
    scanf("%d",&a); //!  forgot placeholder(&) here
    
    printf("a is %d",a);
}

void function3() {
    float a,b; //@ i usually use int instead of float
    printf("Whats Value of Length?\n");
    scanf("%f",&a);
    printf("Whats Value of \\ Breadth?\n");
    scanf("%f",&b);

    printf("Area of \' Rectangle %0.2f", a*b); //! use 0.2 in prinf not in scan

}

int main() {
    function3();  //! SEE HERE TOO
    return 0;
}