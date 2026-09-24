#include<stdio.h>

int avg(int, int, int); //all int

int avg(int a, int b, int c) {
    printf("average of %d %d %d is %f", a, b, c,(float)(a+b+c/3)); // see here float
    return a+b+c/3;

}
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    avg(a,b,c); // this is function we made and have to type here in int main
}