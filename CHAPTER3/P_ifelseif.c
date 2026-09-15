#include<stdio.h>
// Grade QUESTION


int main(){
    int a;
    char grade;
    printf("Marks Obtained by Student is\n");
    scanf("%d", &a);

    if (100>=a && a>=90) // for above and below 100 and 0 marks a > 100 || a < 0 printf invalid marks      HERE
        grade = 'A';
    else if (a>=75)
        grade = 'B';
    else if (a>=60)
        grade = 'C';
    else if (a>=40)
        grade = 'D';
    else
         grade = 'F';
    printf("Grade: %c\n", grade);

    return 0;

}