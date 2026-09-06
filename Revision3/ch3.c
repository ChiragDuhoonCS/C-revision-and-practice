#include <stdio.h>

void program1() {
    int sub1, sub2, sub3;
    float percentage;

    // 1. Take marks input for 3 subjects
    printf("Marks in subject1: ");
    scanf("%d", &sub1);

    printf("Marks in subject2: ");
    scanf("%d", &sub2);

    printf("Marks in subject3: ");
    scanf("%d", &sub3);

    // 2. Check if any subject is below 40 -> print Fail immediately
    if (sub1 < 40 || sub2 < 40 || sub3 < 40) {
        printf("\nResult: Fail (Scored below 40 in one or more subjects)\n");
    } else {
        // 3. Calculate percentage using float division (3.0f prevents truncation)
        percentage = (sub1 + sub2 + sub3) / 3.0f;
        printf("\nPercentage: %.2f%%\n", percentage);

        // 4. Grade evaluation (A >= 80%, B >= 60%, C >= 40%)
        if (percentage >= 80.0f) {
            printf("Grade: A\n");
        } else if (percentage >= 60.0f) {
            printf("Grade: B\n");
        } else {
            printf("Grade: C\n");
        }

        // 5. Scholarship check (>= 85%)
        if (percentage >= 85.0f) {
            printf("Scholarship Eligible\n");
        }

        // 6. Ternary operator to print Pass or Fail
        printf("Final Status: %s\n", (percentage >= 40.0f) ? "Pass" : "Fail");
    }
}

int main() {
    program1();
    return 0;
}