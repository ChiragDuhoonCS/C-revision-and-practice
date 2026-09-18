#include<stdio.h>

int tentimes(int*);
int tentimes(int*a){
    return *a * 10;

}
int main() {
    int a;
    scanf("%d", &a);
    printf("Value  10 times is %d",tentimes(&a));
    return 0;
}