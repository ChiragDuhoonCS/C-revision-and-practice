#include<stdio.h>

int main1() {
   int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
   int* ptr = numbers;

    printf("This is first value %d\n",*ptr);
    printf("This is third value %d\n",*ptr+2);
}

//! Question number 4
int main2() {
    int table[10];
    int n;

    printf("Enter the number for the multiplication table: ");
    scanf("%d", &n);

    // 1. Store the table values in the array
    for (int i = 0; i < 10; i++) {
        table[i] = n * (i + 1);
    }

    // 2. Print values from the array
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", n, i + 1, table[i]);
    }

    return 0;
}

int main3() {
    int bigtable[3*10];
    int n,m,o;

    printf("Enter the number for the multiplication table1: ");
    scanf("%d", &n);

    printf("Enter the number for the multiplication table2: ");
    scanf("%d", &m);

    printf("Enter the number for the multiplication table3: ");
    scanf("%d", &o);

    for (int i = 0; i < 10; i++)
    {
        bigtable[i] = n*(i+1);
    }
    
    
    for (int j = 0; j < 10; j++)
    {
        bigtable[j] = m*(j+1);
    }
    
    
    for (int k = 0; k < 10; k++)
    {
        bigtable[k] = o*(k+1);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", n, i + 1, bigtable[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", m, i + 1, bigtable[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", o, i + 1, bigtable[i]);
    }
}



int main() {
    main3();
    return 0;
}


