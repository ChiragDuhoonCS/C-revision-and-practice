/*
Convert this:

123+45*(6-2)

into meaningful pieces called tokens. token is like how we reed

Instead of seeing:

1
2
3
+
4
5
*
(
6
-
2
)



the calculator should see:

NUMBER(123)  one token
PLUS
NUMBER(45)
MULTIPLY
LEFT_PAREN
NUMBER(6)
MINUS
NUMBER(2)
RIGHT_PAREN

Memory Visualization

Expression:

12+5

Tokens become:

Token	Type	Value
0	NUMBER	12
1	PLUS	0
2	NUMBER	5

Much easier to work with than characters.



Algorithm
Read expression

↓

Current character

↓

Digit?

↓

YES

Read complete number

Store NUMBER token

↓

NO

Operator?

↓

Store Operator token

↓

Move to next character

↓

Repeat

*/