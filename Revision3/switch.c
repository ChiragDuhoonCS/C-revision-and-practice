#include<stdio.h>

int yo() {
    int n;
    int choice;

    printf("Whats value of n: \n");
    scanf("%d",&n);

    printf("Whats your choice: \n");
    scanf("%d",&choice);
    printf("\n");

    switch (choice)
    {
    case 1:
        printf("%d",n+n);
        break;
    
    case 2:
        printf("%d",n*n);
        break;

    case 3:
        printf("%d",n*2);
        break;
    default:
        break;
    }
    
}

#include <stdio.h> 
 
void yo1() { 
    int n; 
    int choice; 
 
    while (1) { // Infinite loop so the program keeps running
        printf("\n--- Menu ---\n");
        printf("0. Exit\n");
        printf("1. n + n\n");
        printf("2. n * n\n");
        printf("3. n * 2\n");
        printf("Whats your choice: \n"); 
        
        scanf("%d", &choice); 
 
        // 1. Using BREAK to exit the loop entirely
        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break; 
        }

        // 2. Using CONTINUE to skip the rest and restart the loop
        if (choice < 1 || choice > 3) {
            printf("Invalid choice! Please try again.\n\n");
            continue; 
        }

        // If choice is valid, ask for 'n'
        printf("Whats value of n: \n"); 
        scanf("%d", &n); 
        printf("\n"); 
 
        switch (choice) { 
            case 1: 
                printf("Result: %d\n", n + n); 
                break; // Breaks out of the switch statement
             
            case 2: 
                printf("Result: %d\n", n * n); 
                break; // Breaks out of the switch statement
         
            case 3: 
                printf("Result: %d\n", n * 2); 
                break; // Breaks out of the switch statement
        } 
    }
} 
 




int main() {
    yo3();
    return 0;
}