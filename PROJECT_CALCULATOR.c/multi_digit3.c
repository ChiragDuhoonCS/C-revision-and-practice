// about muti digit like 567
// its like 5*100+6*10+7    number = number * 10 + digit;  IT REPEAT HERE
// it will ask the calculator  Is the next character also a digit?

// computer store things in ascii

/*  ALGORITHIM
If digit

↓

number=0  

↓

Keep reading digits

↓

number = number*10 + digit

↓

Print number

↓

Continue

123

i = 0
'1'
number = 0*10+1   1
then number = 1*10+2   12
then number = 12*10+3   123
*/
#include <stdio.h>

int i = 0;

//while (exp[i] >= '0' && exp[i] <= '9')  // to stop loop it is not digit
//{
 //   number = number * 10 + (exp[i] - '0'); //[i] its indexing
   //     i++; // 53 - 48 = 5  its ascii to get number 5 48 is 0 here and 53 is 5 here
//}