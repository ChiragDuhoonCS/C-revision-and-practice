#include <stdio.h>
#include <stdlib.h>

int main1() {
    float *ptr;

    // Allocate memory for 5 floating-point numbers
    ptr = (float*) malloc(5 * sizeof(float));

    // Always check if allocation succeeded
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 1.5;
    }

    // Print values
    printf("Dynamically allocated float array using malloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", ptr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(ptr);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main2() {
    int n;
    int *ptr;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    // Allocates contiguous space for n integers, initialized to 0
    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Notice that all values start at 0 by default
    printf("Default initialized values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}


int main3() {
    // 1. Ask for a magic bag that holds 3 integer toy IDs
    int *toyBag = (int*) malloc(3 * sizeof(int));

    // Check if the computer had space for our bag
    if (toyBag == NULL) {
        printf("No space left in the toy room!\n");
        return 1;
    }

    // 2. Put 3 toys inside
    toyBag[0] = 10; // Toy 1
    toyBag[1] = 20; // Toy 2
    toyBag[2] = 30; // Toy 3

    printf("Original 3 toys in my bag:\n");
    for (int i = 0; i < 3; i++) {
        printf("Toy #%d: %d\n", i + 1, toyBag[i]);
    }

    // 3. We got 2 new toys! Let's stretch the bag to hold 5 toys
    toyBag = (int*) realloc(toyBag, 5 * sizeof(int));

    // Add the two new toys
    toyBag[3] = 40; // Toy 4
    toyBag[4] = 50; // Toy 5

    printf("\nAfter stretching the bag to hold 5 toys:\n");
    for (int i = 0; i < 5; i++) {
        printf("Toy #%d: %d\n", i + 1, toyBag[i]);
    }

    // 4. All done playing! Clean up the bag
    free(toyBag);
    toyBag = NULL; // Put the lock on so we don't accidentally touch it

    printf("\nCleaned up the room and returned the bag!\n");

    return 0;
}


int main() {
    main3();
    return 0;
}