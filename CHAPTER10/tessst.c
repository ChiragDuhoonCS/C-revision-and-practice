#include <stdio.h>

int main1() {
    // Open file in write mode
    FILE *fptr = fopen("yoo.c", "w");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    int roll_no = 101;
    float marks = 92.50;
    char name[] = "Harry";

    // Write formatted data to the file
    fprintf(fptr, "Roll: %d, Name: %s, Marks: %.2f\n", roll_no, name, marks);

    // Always close the file
    fclose(fptr);

    printf("Data successfully written to student_record.txt\n");
}

#include <stdio.h>

int main2() {
    FILE *ptr = fopen("yoo.c", "r");

    // Check whether the file exists or not
    if (ptr == NULL) {
        printf("Error: File 'numbers.txt' does not exist!\n");
        return 1;
    }

    int num1, num2, num3;

    // Read 3 integers from the file
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);

    printf("Values read from file:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Number 3: %d\n", num3);

    fclose(ptr);
    return 0;
}

#include <stdio.h>

int main3() {
    // Step 1: Write characters using fputc
    FILE *writeFile = fopen("yoo.c", "w");
    if (writeFile == NULL) {
        printf("Failed to open file for writing.\n");
        return 1;
    }

    char message[] = "C Language File I/O!";
    for (int i = 0; message[i] != '\0'; i++) {
        fputc(message[i], writeFile);
    }
    fclose(writeFile);

    // Step 2: Read characters one by one using fgetc and detect EOF
    FILE *readFile = fopen("yoo.c", "r");
    if (readFile == NULL) {
        printf("Failed to open file for reading.\n");
        return 1;
    }

    printf("Reading file character by character:\n");
    char ch;
    while (1) {
        ch = fgetc(readFile);
        if (ch == EOF) {
            break; // Stop when the end of file is reached
        }
        printf("%c", ch);
    }
    printf("\n");

    fclose(readFile);
    return 0;
}

int main() {
    main3();
    return 0;

}