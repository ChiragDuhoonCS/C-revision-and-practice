#include<stdio.h>

int main() {
    char st[50];
    gets(st); // instead of scanf  use fgets intead of gets
    // we use puts too instead of this put just make cursor in new line   

    printf("%s",st);  //scanf cannot be used for multiple words with spaces

    return 0;
}
/// see booklet 
/*@ STRLEN() 
This function is used to count the number of characters in the string excluding the null 
(‘\0’) characters. 
int length = strlen(st); 
These functions are declared under <string.h> header file. 
45 
@ STRCPY() 
This function is used to copy the content of second string into first string passed to it. 
char source[] = "harry"; 
char target[30]; 
strcpy (target,source);  //target now contains "harry" 
target string should have enough capacity to store the source string. 
@ STRCAT() 
This function is used to concatenate two strings. 
char s1[12] = "hello"; 
char s2[] = "harry"; 
strcat(s1,s2); // s1 now contains "helloharry" <no space in between> 
@ 