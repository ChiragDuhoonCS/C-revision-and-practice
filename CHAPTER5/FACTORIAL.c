#include<stdio.h>
// USE IT WHEN THERE IS RECCURSIVE ALGORITIUM OR FORMULA
int factorial(int);  //function prototype

int factorial(int n) {
    if (n == 1 || n == 0){ // to avoid getting in negative value
        return 1;
    }
    
// factorial(n) = factorial(n-1)(n)
return factorial(n-1)*(n);
}
int main(){
    int a;
    scanf("%d",&a); // if i use \n here it ask me input two times because it waits for more input because of \n
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}


