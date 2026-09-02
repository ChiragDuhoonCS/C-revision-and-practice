//!  CHAPTER 1

#include<stdio.h> //& library

void program() {
    int sum; //& int,char and more are defination
    int a; //& a is variable
    int b = 5; //&  5 is constant
    printf("Whats a: ");
    scanf("%d",&a); //&  & means address of


    sum = a+b;
    printf("sum of %d and %d is %d", a,b,sum); 
}

void program1() {
    int a;
    int b;

    printf("Whats length: ");
    scanf("%d", &a);
    printf("Whats Breadth: ");
    scanf("%d", &b);
    
    printf("Area of rectangle is %d", a*b );
}

void program3() {
    int c;
    printf("Whats the value of celcius: \n");
    scanf("%.2f", &c);

    printf("The value of Fahrenheit is %.5f", 1.8*c+ 32);
}


//!  CHAPTER 2

//@  to find remainder

void program4() {
    int a;
    int b;

    printf("Whats the value of a: " ); 
    scanf("%d", &a);//@ dont use \n in scanf

    printf("\nWhats the value of b: " );
    scanf("%d", &b);

    printf("\nThe remainder is %d", a % b); //@ for d only if f use fmod
}


int main() {
    program4();
    return 0;
}