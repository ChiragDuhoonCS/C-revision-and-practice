/* Write a C program that takes a string from the user and:

Find its length
Count vowels and consonants
Reverse the string
Check whether it is a palindrome

Requirement: Use string functions where appropriate (strlen, strrev if available), and loops. No separate user-defined functions.*/

#include <stdio.h>
#include <string.h>

void function1() {
    char st[50];
    int y;

    printf("Yo whats string: ");
    
    // Read string with spaces safely (prevents buffer overflow)
    if (fgets(st, sizeof(st), stdin) != NULL) {
        // Strip the newline character that fgets captures
        st[strcspn(st, "\n")] = '\0';
    }

    // puts automatically appends a newline
    puts(st);

    // printf needs an explicit \n
    printf("%s\n", st);

    // strlen excludes the null character '\0'
    y = strlen(st);

    // Pass y directly; do not use &y in printf
    printf("Length: %d\n", y);
}

int main() {
    function1();
    return 0;
}