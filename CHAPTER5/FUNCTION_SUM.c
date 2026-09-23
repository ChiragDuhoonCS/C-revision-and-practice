#include<stdio.h>


int sum(int a, int b) { // VALUE OF a and b IS IN INT 
    int c;
    c = a+b; // EXPLAIN c
    return c; // WHAT WE EXPECT TO GET RETURN
}
int main(){
int d = sum (2,3);      // it saves our time when we add  multiple functions like that
int e = sum(67, 69);    // IT SENDS ITS COPY TO c = a+b NOT EXCACT SO ITS CANT CREATE CHANGES IN IT
printf("%d\n%d\n" , d, e); // see here I HAVE TO ADD , AND SPACE AFTER CLOSING "

}