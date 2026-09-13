#include<stdio.h>
// area of circle here focus on float

int main() {
    float r; //see here we use float instead of int
    
    printf("Enter Radius\n");
    scanf("%f", &r);

    printf("Area of circle is %f", 3.14*r*r);
    return 0;
}