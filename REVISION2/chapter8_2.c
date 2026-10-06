#include <stdio.h>
#include <string.h>

int main1() {
    char st[50];
    fgets(st, sizeof(st), stdin);
    printf("%s", st);
}

int main2() {
    char *ptr = "Chirag";
    ptr = "tung";
    printf("%s",ptr);
}

int main3() {
    char st[50];
    fgets(st, sizeof(st), stdin);
    printf("%s", st);
    int length = strlen(st);
    printf("%d",length);
}

int main4() {
    char st[50];
    fgets(st, sizeof(st), stdin);
    printf("%s\n", st);
    char target[50];
    strcpy(target,st);
    printf("YO THIS IS TARGET ONE %s",target);
}

int main5() {
    char st[50];
    char st2[22];
    fgets(st, sizeof(st), stdin);
    fgets(st2, sizeof(st2), stdin);
    st[strcspn(st, "\n")] = '\0'; //! to escape \n IMPORTANT
    strcat(st,st2);
    printf("%s",st);
}

int main6() {
  int result1 =  strcmp("far", "joke");    
// Negative value 
  int result2 =  strcmp("joke", "far");
  printf("%d\n",result1); 
  printf("%d\n",result2); 
}

int main7() {
    // 1. Allocate memory for 30 integers
    int *ptr = (int*)malloc(30 * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 2. Store values (example: storing numbers 1 to 5)
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }

    // 3. Print the values to get output
    printf("Allocated array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // 4. Free the allocated memory
    free(ptr);

    return 0;
}

int main() {
    main6();
    return 0;
}