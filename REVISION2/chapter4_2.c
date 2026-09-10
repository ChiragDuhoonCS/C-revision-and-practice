#include<stdio.h>


//!  BREAK LOOP
void function1() {
    int n;
    printf("Whats n?");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",i);
        if (i==4)
        {
            break; //@ BREAK COMPLETELY STOP IT
        }
        
    }
    

}


//!  CONTINUE LOOP
void function2() {
    int n,t;
    printf("Whats n?");
    scanf("%d",&n);
     printf("what you want to skip?");
    scanf("%d",&t);
    for (int i = 0; i < n; i++)
    {
        if (i==t)
        {
            continue;//@ CONTINUE USE IT TO SKIP 
        }
        printf("%d\n",i);

    }
}

//!  WHILE LOOP
void function3() {
    int c;
    while (c<5)
    {
        c++;  //* BY THIS IT WILL COUNT TO 5

        printf("%d\n", c);

        //c++;  //* BY THIS IT WILL COUNT TO 4
        
    }    
}

void function4() {
    int n;
    printf("Whose table you want?");
    scanf("%d" ,&n);
    printf("Here is your table of %d\n",n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d\n", i*n);
    }
    
}

void function5() {
    int n;
    printf("Whose reverse table you want?");
    scanf("%d" ,&n);
    printf("Here is your reverse table of %d\n",n);
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", i*n);
    }
    
}

void function6() {
    int n,sum;
    printf("Whose table sum you want?");
    scanf("%d" ,&n);
    for (int i = 1; i < 11; i++)
    sum = sum+i*n; //> SEE HERE
    {
        printf("%d\n", sum);
    }
    
}
//@ IMPORTANT QUESTION
void function7() {
    int n,factorial = 1 ; //! it will give garbage value if 1 is not apply
    printf("Whose factorial you want?");
    scanf("%d" ,&n);
    printf("Here is your factorial of  %d\n",n);
    for (int i = 1; i <= n; i++) //! see here 
        factorial = (factorial*i); // i did mistake here multiple time
    
    {
        printf("%d\n", factorial);
    }
}


int main() {
    function7();
    return 0;
}