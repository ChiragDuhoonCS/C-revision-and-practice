#include <stdio.h>

i
        printf("\n");

        i++;
    }

    return 0;
}

/*
Absolutely. From now on, I'll follow this format:

1. **Complete Theory**
2. **Internal Working**
3. **Memory Diagrams**
4. **Algorithm**
5. **Code**
6. **Line-by-line Explanation**
7. **Dry Runs**
8. **Common Mistakes**
9. **Exercises**
10. **Interview Questions**

I'll try to finish each phase in one response. If a phase exceeds the response limit, I'll split it at a logical point **without skipping anything**.

---

# Professional Calculator in C

# Phase 6 — Infix → Postfix Coding (Shunting Yard Algorithm)

---

# Goal

Convert

```text
8 + 5 * (2 - 1)
```

into

```text
8 5 2 1 - * +
```

because postfix is much easier to evaluate.

---

# What We Already Have

From previous phases we have:

```c
typedef struct
{
    int type;
    double value;
    char op;
} Token;
```

And a token array like:

| Index | Token       |
| ----: | ----------- |
|     0 | NUMBER(8)   |
|     1 | OP(+)       |
|     2 | NUMBER(5)   |
|     3 | OP(*)       |
|     4 | LEFT_PAREN  |
|     5 | NUMBER(2)   |
|     6 | OP(-)       |
|     7 | NUMBER(1)   |
|     8 | RIGHT_PAREN |

We now convert this array into another array.

---

# We Need Three Things

### 1. Output Array

```c
Token postfix[100];
```

Stores postfix expression.

---

### 2. Operator Stack

```c
char stack[100];
```

Stores operators and parentheses.

---

### 3. Top

```c
int top = -1;
```

Tracks top of stack.

---

# Step 1 — Operator Precedence

We need a function.

```c
int precedence(char op)
{
    if(op == '+' || op == '-')
        return 1;

    if(op == '*' || op == '/' || op == '%')
        return 2;

    if(op == '^')
        return 3;

    return 0;
}
```

---

## Why?

Suppose

```text
+
```

returns

```text
1
```

Suppose

```text
*
```

returns

```text
2
```

Then

```text
2 > 1
```

means

```text
*
```

has higher priority.

---

# Dry Run

Input

```c
precedence('*')
```

Execution

```text
First if ?

False

Second if ?

True

Return 2
```

Done.

---

# Step 2 — Associativity

```c
int isLeftAssociative(char op)
{
    if(op == '^')
        return 0;

    return 1;
}
```

---

Meaning

```text
+

-

*

/

%
```

Return

```text
1
```

Power

```text
^
```

Returns

```text
0
```

because it is right associative.

---

# Step 3 — Stack Functions

We only need operators here.

```c
char stack[100];

int top = -1;
```

---

### Push

```c
void push(char ch)
{
    stack[++top] = ch;
}
```

Equivalent to:

```c
top++;
stack[top] = ch;
```

---

### Pop

```c
char pop()
{
    return stack[top--];
}
```

Equivalent to:

```c
char temp = stack[top];

top--;

return temp;
```

---

### Peek

```c
char peek()
{
    return stack[top];
}
```

Returns top element without removing it.

---

### Empty

```c
int isEmpty()
{
    return top == -1;
}
```

---

# Main Algorithm

```c
void infixToPostfix(Token input[],
                     int inputSize,
                     Token output[],
                     int *outputSize)
```

Parameters

```
input

↓

Original token array

inputSize

↓

Number of tokens

output

↓

Stores postfix

outputSize

↓

How many postfix tokens produced
```

---

# Variables

```c
int out = 0;
```

This is output index.

Initially

```text
output

Empty
```

---

# Loop

```c
for(int i=0;i<inputSize;i++)
```

Read one token at a time.

---

# Case 1 — Number

```c
if(input[i].type == NUMBER)
{
    output[out++] = input[i];
}
```

Why?

Numbers always go directly to postfix.

Example

```
Input

8

↓

Output

8
```

---

# Case 2 — Left Parenthesis

```c
else if(input[i].type == LEFT_PAREN)
{
    push('(');
}
```

Always push.

Never compare precedence.

---

# Case 3 — Right Parenthesis

```c
else if(input[i].type == RIGHT_PAREN)
{
    while(!isEmpty() && peek()!='(')
    {
        Token t;

        t.type = OPERATOR;

        t.op = pop();

        output[out++] = t;
    }

    pop();
}
```

---

## Why?

Suppose stack

```
TOP

+

*

(
```

Reading

```
)
```

We pop until

```
(
```

Output becomes

```
*

+
```

Then discard

```
(
```

Parentheses never appear in postfix.

---

# Case 4 — Operator

This is the heart of the algorithm.

```c
else
{
    while(!isEmpty() &&
          peek()!='(' &&
          (
             precedence(peek()) >
             precedence(input[i].op)

             ||

             (
              precedence(peek()) ==
              precedence(input[i].op)

              &&

              isLeftAssociative(input[i].op)
             )
          ))
    {
        Token t;

        t.type = OPERATOR;

        t.op = pop();

        output[out++] = t;
    }

    push(input[i].op);
}
```

---

# Read Slowly

Suppose stack

```
TOP

*

+
```

Current operator

```
+
```

Compare

```
*

vs

+
```

Since

```
2 > 1
```

Pop

```
*
```

Then compare again

```
+

vs

+
```

Equal precedence.

Addition is left associative.

Pop again.

Then push current plus.

---

# End of Input

After loop finishes

Some operators may remain.

```c
while(!isEmpty())
{
    Token t;

    t.type = OPERATOR;

    t.op = pop();

    output[out++] = t;
}
```

Done.

---

Store total tokens

```c
*outputSize = out;
```

Finished.

---

# Complete Function

```c
void infixToPostfix(Token input[],
                    int inputSize,
                    Token output[],
                    int *outputSize)
{
    int out = 0;

    for(int i=0;i<inputSize;i++)
    {
        if(input[i].type == NUMBER)
        {
            output[out++] = input[i];
        }

        else if(input[i].type == LEFT_PAREN)
        {
            push('(');
        }

        else if(input[i].type == RIGHT_PAREN)
        {
            while(!isEmpty() && peek()!='(')
            {
                Token t;

                t.type = OPERATOR;

                t.op = pop();

                output[out++] = t;
            }

            pop();
        }

        else
        {
            while(!isEmpty() &&
                  peek()!='(' &&
                  (
                     precedence(peek()) >
                     precedence(input[i].op)

                     ||

                     (
                     precedence(peek()) ==
                     precedence(input[i].op)

                     &&

                     isLeftAssociative(input[i].op)
                     )
                  ))
            {
                Token t;

                t.type = OPERATOR;

                t.op = pop();

                output[out++] = t;
            }

            push(input[i].op);
        }
    }

    while(!isEmpty())
    {
        Token t;

        t.type = OPERATOR;

        t.op = pop();

        output[out++] = t;
    }

    *outputSize = out;
}
```

---

# Complete Dry Run

Expression

```
8 + 5 * 2
```

| Token | Stack | Output    |
| ----- | ----- | --------- |
| 8     |       | 8         |
| +     | +     | 8         |
| 5     | +     | 8 5       |
| *     | * +   | 8 5       |
| 2     | * +   | 8 5 2     |
| End   | +     | 8 5 2 *   |
| End   |       | 8 5 2 * + |

Final postfix

```
8 5 2 * +
```

---

# Time Complexity

Each operator is

* pushed once
* popped once

Each number is processed once.

Overall

```
O(n)
```

Space

```
O(n)
```

---

# Common Mistakes

### ❌ Forgetting to pop remaining operators

Wrong postfix:

```
8 5
```

Correct:

```
8 5 +
```

---

### ❌ Sending '(' to output

Parentheses are only guides during conversion.

They must **never** appear in postfix.

---

### ❌ Using `>=` for all operators

For the power operator (`^`), using `>=` is incorrect because it is **right-associative**.

Example:

```
2 ^ 3 ^ 2
```

Correct postfix:

```
2 3 2 ^ ^
```

Not:

```
2 3 ^ 2 ^
```

This is why we explicitly check associativity.

---

### ❌ Forgetting to initialize `out`

Always start with:

```c
int out = 0;
```

---

# Exercises

Convert these expressions to postfix manually:

1.

```
7 + 8 * 3
```

2.

```
(7 + 8) * 3
```

3.

```
5 * (6 + 2) - 4
```

4.

```
2 ^ 3 ^ 2
```

Then verify them using your implementation.

---

# Interview Questions

1. Why do we convert infix to postfix?
2. Why are parentheses omitted in postfix?
3. Why is `^` right-associative?
4. What data structure powers the Shunting Yard Algorithm?
5. What is the time complexity of infix-to-postfix conversion?
6. Why do numbers go directly to the output while operators are temporarily stored?

---

## Phase 6 Complete ✅

You now understand both the **theory** and **implementation** of the Shunting Yard Algorithm.

The next phase, **Phase 7**, will evaluate the generated postfix expression using another stack to produce the final numerical result. Once Phase 7 is complete, your calculator will be able to solve complete mathematical expressions correctly.

*/