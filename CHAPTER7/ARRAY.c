#include<stdio.h>

int main() {
    int marks[] = {22,34,67,69};   // array stores more value in it
    int* ptr = marks;   // we are using pointer to catch things in array
     // we can use &marks[0]  instead of marks

    for (int i = 0; i < 4; i++)
    {
        printf("The value of index1 %d is %d\n", i, *ptr);
        printf("The value of index %d is %d\n", i, marks[i]);    // we can use ptr* instead of marks[i]
    }
    return 0;    // scanf("%d", &arr[i][j]);   use it in 3D when we have to ask particular value
}

// int and float takes 4 byte and char takes 1
