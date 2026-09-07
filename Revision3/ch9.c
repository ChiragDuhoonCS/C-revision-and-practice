#include<stdio.h>

struct student {
    char name[30][50];
    int roll_no;
    float marks;
};

void displaystudent(struct student s) {
    printf("================================\n");
    printf("Name: %s", s.name);
    printf("Roll no: %d", s.roll_no);
    printf("Marks: %.2f", s.marks);
    printf("================================\n");
}

