#include<stdio.h>

void display(); // this is function PROTOTYPE (VOID MEANS IT DOESNOT RETURN ANY VALUE)

int main() {

    int a; // INT declaration as before
    display(); // FUNCTION RECALL
    return 0; //RETURN STATEMENT (WHAT WE EXPECT TO RETURN) (0 BECAUSE RETURN IN TEXT NOT IN INT OR ANY FUNCTION)
}

void display() { // FUNCTION DEFINATION
    printf("Tung Tung Sahur\n"); //PRINTING MESSEGE
}