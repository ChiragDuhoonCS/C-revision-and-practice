#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

// Function receives a complete copy of the structure
void displayStudent(struct Student s) {
    printf("Roll Number: %d\n", s.roll);
    printf("Marks      : %.2f\n", s.marks);
}

i