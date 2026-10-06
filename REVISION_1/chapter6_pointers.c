/*                          
========== POINTER PRACTICE SYSTEM ==========

1. Display Value and Address of a Variable
2. Swap Two Numbers (Call by Reference)
3. Find Maximum of Two Numbers
4. Find Minimum of Two Numbers
5. Check Even or Odd
6. Check Positive, Negative, or Zero
7. Calculate Square and Cube of a Number
8. Find Factorial
9. Check Prime Number
10. Reverse a Number
11. Count Digits
12. Sum of Digits
13. Check Palindrome Number
14. Check Armstrong Number (3-digit)
15. Calculate GCD (HCF)
16. Calculate LCM
17. Exit*/

#include<stdio.h>
void print1() {
    int i = 67;
    int*j;
    j = &i;
}

void print2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
     
    int x,y;
    printf("Whats a %d and b %d", x , y);
    scanf("%d %d", &x, &y);

    print2(&x,&y);
    printf("after swap x = %d, y = %d\n", x,y);

}

int main() {
    print2;
    return 0;
}
