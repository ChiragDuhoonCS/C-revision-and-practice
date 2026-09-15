#include<stdio.h>

int main() {
    char ch;

    printf("Your Character:\n");
    scanf("%c", &ch);

    if ( 'a' <= ch && ch <= 'z' ) // see here if i add ; it end if statement that else become childless
    
        printf("%c Its a Lowercase");
    
    else
     printf("%c Its not a lowercase");
    
    return 0;
}