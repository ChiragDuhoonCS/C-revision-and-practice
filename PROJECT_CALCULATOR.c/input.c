// i will learn here how to make calculator

//   I N P U T
/*
we dont use scanf because  after s p a c e it didnt work like it print s here
so we use fget()
and char[] here we create array

Name	Full Form	    Purpose
stdin	Standard Input	Read input
stdout	Standard Output	Print output
stderr	Standard Error	Print error messages

std means read from keyboard input

strcspn It finds the first occurrence of any character from a given set.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char expression[100]; // array from 0 to 99

    printf("===== Professional Calculator =====\n");

    printf("Enter Expression: "); // means 5*6+8 like that

    fgets(expression, sizeof(expression), stdin); // we have to type like it

    expression[strcspn(expression, "\n")] = '\0';  // it is to remove \n

    printf("\nYou Entered: %s\n", expression);

    return 0;
}

// F O R       A S C I I
#include <stdio.h>

int main()
{
    char ch = 'A';

    printf("%c\n", ch);

    printf("%d\n", ch);

    return 0;
}
// it will print out A and 65