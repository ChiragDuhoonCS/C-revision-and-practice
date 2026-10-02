#include<stdio.h>

int main() {
    int table[10];
    int* ptr = table;
    int n;

    scanf("%d", &n);  // put scanf before for so we dont have to put value again and again
    for (int i = 1; i < 11; i++)
    {
    
        table[i-1] = n*i;  //  table[index] = value
        // for ptr *(ptr + i -1) = n*i
        printf("Table of %d is %d\n", n, table[i-1]);
        
    }
    return 0;
}