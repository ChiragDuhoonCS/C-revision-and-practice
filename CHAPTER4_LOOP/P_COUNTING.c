#include<stdio.h>

int main() {
    int n;

    printf("WHATS N?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // system first check i but only in starting , then check i < n then print then do i++ then check i < n then print
    {
        printf("%d\n", i);  // i instead of n
    }
    return 0;

}