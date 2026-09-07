#include<stdio.h>

struct student {
    char name[30][50];
    int roll_no;
    float marks;
};

void displaystudent(struct student s) {
    printf("================================\n");
    printf("Name: %s\n", s.name);
    printf("Roll no: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    int n;

    printf("Enter number of students (max 30): ");
    scanf("%d", &n);

    if (n > 30) n = 30;
    if (n < 1) return 0;

    struct student s[30];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%49s", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- DISPLAYING STUDENT DETAILS ---\n");
    for (int i = 0; i < n; i++) {
        displaystudent(s[i]);
    }

    return 0;
}