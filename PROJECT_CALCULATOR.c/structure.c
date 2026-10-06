// structure -- group diff types of data in one unit
// why do we need -- when we have large amount of data -- repeated filler

#include <stdio.h>

   // This is just blueprint
    struct student
    {
        int roll;
        float number;
    };
void print1(){
    struct student s1; // calling  we can do struct student students[100] we can fill up 100
    s1.roll = 34; // here is calling notice .     student1.roll above one
    s1.number = 98.9;
    
    printf("Roll : %d", s1.roll); // print
}
    




int main() {
    print1();
    return 0;
}