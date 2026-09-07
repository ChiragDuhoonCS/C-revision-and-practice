/* Write a C program that takes a string from the user and:

Find its length
Count vowels and consonants
Reverse the string
Check whether it is a palindrome

Requirement: Use string functions where appropriate (strlen, strrev if available), and loops. No separate user-defined functions.*/

#include<stdio.h>
#include<string.h>

void function1() {
    char st[50];
    int y;

    printf("Yo whats string: \n");
    puts(st);

    printf("%s", st);

    y = strlen(st);

    printf("%d", &y);
}

int main() {
    function1();
    return 0;
}