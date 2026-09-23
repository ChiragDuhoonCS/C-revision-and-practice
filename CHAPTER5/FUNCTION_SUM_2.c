#include<stdio.h>

int sum(int,int); // PROTOTYPE NOT NECECERY TO WRITE BUT IT LOOK SIMPLIFY AND COOL

int sum(int a, int b) {  //FUNCTION DEFINATION
    printf("The sum is %d\n", a+b); // SO WE DONT HAVE TO DO AGAIN    ALSO WE CAN WRITE IT IN BOTTOM
    return a+b;
}

int main(){ // ALWAYS USE THIS
int d = 5; // THIS IS HARD CODE
int e = 6; // IMPORTANNNTTTTT      THESE COPY GO UP NOT THESE BY ALONE SO OUR FUNCTION DEFINATION CANT CHANGE INPUT VALUE NO MATTER WHAT

sum(d,e);

int f;
int g;
scanf("%d\n%d", &f,&g); // TAKING INPUT FROM USER

sum(f,g); // THIS IS FUNCTION WE CREATE TO SIMPLIFY STUFF
}