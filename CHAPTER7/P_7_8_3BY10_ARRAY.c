#include<stdio.h>

int main() {
    int table[3][10];
    
    
    int a,b,c,n;

    scanf("%d %d %d",&a, &b, &c);
    int nums[3] = {a,b,c};

    for (int i = 1; i < 11; i++)
    { for (int n = 0; n < 3; n++){
        table[n][i-1] = nums[n]*i;
        printf("%d * %d = %d\n", nums[n], i , table[n][i-1]);
        
    
    }
    }
    return 0;
}