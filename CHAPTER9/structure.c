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

int main() {
    struct Student s1 = {101, 89.5};

    // Passing the structure variable directly
    displayStudent(s1);

    return 0;
}