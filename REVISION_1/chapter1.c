#include<stdio.h>

void print1() {
    int  roll_no , age;
    float percentage;
    char name[50], grade; // see here

    printf("NAME:");
    scanf("%s", name); // no gap in input

    printf("ROLL NUMBER AND AGE:");
    scanf("%d %d", &roll_no, &age);

    printf("GRADE:");
    scanf(" %c", &grade);  // USE SPACE WHEN DIFF TYPE TO CHAR    IF NOT USE This reads the leftover newline (\n) after entering age

    printf("PERCENTAGE:");
    scanf("%f", &percentage);

    printf("\nName: %s\n Roll Number: %d\n Age: %d\n Grade: %c\n Percentage: %.2f",name, roll_no, age, grade, percentage);
    // SEE .2f use it like that
}
int main() {
    print1();
    return 0;
}