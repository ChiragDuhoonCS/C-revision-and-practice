#include<stdio.h>

int main() {
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++); // evaluation order right to left if same variable
    return 0; // evaluate a++ ++a a like that
}
// answer is 6 6 4
// answer 4 5 5 traditionaal      both answer correct
/*! Operator	Meaning	Value used
a++	Post-increment	old value, then +1
++a	Pre-increment	+1 first, then new value*/