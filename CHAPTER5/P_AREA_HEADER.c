#include<stdio.h>
#include<math.h> // header file

int main() {
    int a;
    scanf("%d", &a);
    printf("The area of square is %f", pow(a, 2)); // 2 here represent value over a means a square    
    // pow is just from maths header files
    // %f always use here instead of %d
    return 0;
}