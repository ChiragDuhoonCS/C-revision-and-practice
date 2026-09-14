#include<stdio.h>

int main(){
    int marks1,marks2,marks3;

    printf("Marks 1 is\n");
    scanf("%d", &marks1);

    printf("Marks 2 is\n");
    scanf("%d", &marks2);

    printf("Marks 3 is\n");
    scanf("%d", &marks3);

    printf("The marks are %d %d %d\n", marks1, marks2, marks3);

    if (marks1<33 || marks2<33 || marks3<33)
    {
        printf("You have failed your exam by subject minimum criteria\n");
    }
    else if ((marks1 + marks2 + marks3)/3 < 40) {
        printf("You have failed your exam overall\n");
    }
    return 0;
}