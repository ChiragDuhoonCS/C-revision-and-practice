// infix -- Operator is between operands.  8+5*2
// prefix -- Operator comes before operands  + 5 3    * + 8 5 2
// postfix -- Operator comes after operands   5 3 +     8 5 2 * +  it like folding copy
// it will work like 8 5 2 then it sees * 5*2 thats 10  8 10 then it see +
// it has priority to arrange it  same sign then left prefer  but in case of power its right
/*
2 ^ 3 ^ 2
Correct:
2^(3^2)
NOT
(2^3)^2
This is
Right Associative*/

// why we need -- because computer is dumb and dont know anything about bodmas or other stuff

// when to pop and push
/*
8 + 5 * 2

When we see
+

we don't know what's coming.

So we push it.

Operator Stack
+

Now read
5

Output
8 5

Now read
*

Question:

Should we pop
+

No.

Because
*
has higher priority.

Push
*

Stack

TOP
*
+

Read
2

Output
8 5 2

Input finished.

Now pop everything.

First
*

Output
8 5 2 *
Then

+

Output
8 5 2 * +
*/

// in () first (  always puah when ) come then weite everything inside it
// () dont write in postfix



// S H U T I N G   Y A R D   A L G O


/*
Input

8 + 5 * 2

        │
        ▼

Read Token

        │
        ▼

Number?

YES ─────────► Output

NO

Operator?

YES

Compare precedence

Higher?

YES

Pop

NO

Push

End

Pop remaining operators

Finished*/

// see dump