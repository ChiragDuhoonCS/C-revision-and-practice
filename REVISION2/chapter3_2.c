#include<stdio.h>

void function1() {
    int age;
    printf("Whats your age?\n");
    scanf("%d", &age);

    if (age>100)
    {
    printf("Please put valid age!");
    }
    else if (100>=age && age>=80) //! see use && in this case
    {
    printf("Prefer not to drive because you are very old");
    }
    else if (age>=18)
    {
    printf("You can drive");
    }
    else if (age<18 && age>5)
    {
    printf("You cannot drive     ");
    printf("You are minor");
    }
    else if (age<=5 && age>0 )
    {
        printf("What are you doing here   ");
        printf("Where is your parents");
    }
    else if ( age == 0 )
    {
        printf("Whose fetus is this 💀");
    }
    
}

void function2() {
    int marks1,marks2,marks3;

    printf("Marks 1 is\n");
    scanf("%d", &marks1);

    printf("Marks 2 is\n");
    scanf("%d", &marks2);

    printf("Marks 3 is\n");
    scanf("%d", &marks3);

    printf("The marks are %d %d %d\n", marks1, marks2, marks3);
    
    if ((marks1 + marks2 + marks3)/3 >= 90)
    {
        printf("You perform very good\n");
    }
    if (marks1>=90)
    {
        printf("You perform very well in Marks1\n");
    }
    if (marks2>=90) {
        printf("You perform very well in Marks2\n");
    }
    if (marks3>=90) {
        printf("You perform very well in Marks3\n");
    }
    if (marks1<33 || marks2<33 || marks3<33)
    {
        printf("You have failed your exam by subject minimum criteria\n");
    }
    if ((marks1 + marks2 + marks3)/3 < 40) {
        printf("You have failed your exam overall\n");
    }
}

void function3() {
    int year;

    printf("Whats the year\n");
    scanf("%d", &year);

    if (year % 4 == 0 )
    {
        printf("Not a Leap Year");
    }
    else
    printf("Thats a Leap Year");
}

void function4() {
    int a,b,c,d;

    printf("Whats the number:\n");
    scanf("%d %d %d %d, &a, &b, &c, &d");

   a > b && a > c && a > d
    ? printf("A is greatest")
    : b > a && b > c && b > d
    ? printf("B is greatest")
    : c > a && c > b && c > d
    ? printf("C is greatest")
    : printf("D is greatest");

}

int main() {
    function4();
    return 0;
}