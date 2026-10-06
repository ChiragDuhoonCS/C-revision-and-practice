// yeah calculator
#include<stdio.h>

void print(){
    float num;
    float sum = 0;
    float sub = 0;
    int firstsub = 1; // here 1 means true  we are doing this to save first number in sub
    float multi = 1;  // it goes like 1*first number then first no * second no.....
    float divide = 0;
    float firstdivide = 1;
    float square = 0;
    float cube = 0;
    
    printf("Whats Number: ");

    // for taking input how much we want
    while (1)  // 1 means here is true  means keep looping forever
    {
        scanf("%f", &num);  // .2f is not for scan

        if (num == -1)  // write -1 to stop taking input
        break;
    
        // sum
        sum = sum + num;

        // sub
        if (firstsub) { // we need to save first number
         sub = num;
        firstsub = 0;
        } else {
         sub -= num;
        }

        // multiplication
        multi = multi*num;

        // divide
        if (firstdivide)
        {
            divide = num;
            firstdivide = 0;
        } else {
            if (num == 0)
            {
                 printf("Cannot divide by zero!\n");
            } else {
                divide /= num;
            }
            
        }

        //SUM OF  SQUARE
        square += num* num;

        // SUM OF CUBE
        cube += num* num * num;

        
    }
    printf("The Sum is %.2f\n", sum);
    printf("The Subtract is %.2f\n", sub);
    printf("The Multiplication is %.2f\n", multi);
    printf("The Divide is %.8f\n", divide);
    printf("The Square is %.2f\n", square);
    printf("The Cube is %.2f\n", cube);

}

int main() {
    print();
    return 0;
}






























