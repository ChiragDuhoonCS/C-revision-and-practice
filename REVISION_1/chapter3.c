/*
Perfect! Here's **one comprehensive problem** that combines **everything in Chapter 3**.

---

# 🔥 Mega Challenge: Student Management System

Write a C program that performs the following tasks.

### Step 1: Take Input

* Student Name
* Roll Number
* Age
* Marks in 5 subjects
* Sports Certificate (`Y` or `N`)

---

### Step 2: Calculate

* Total Marks
* Percentage

---

### Step 3: Check Eligibility (`if`)

If age is **less than 18**, print:

```text
Not eligible for college admission.
```

Otherwise:

```text
Eligible for college admission.
```

---

### Step 4: Grade (`else if`)

Assign a grade based on percentage:

```text
90–100  -> A+
80–89   -> A
70–79   -> B
60–69   -> C
50–59   -> D
Below 50 -> Fail
```

---

### Step 5: Pass/Fail (`Logical Operator &&`)

A student passes **only if all 5 subjects have marks greater than or equal to 33**.

Otherwise print:

```text
Result: FAIL
```

Else:

```text
Result: PASS
```

---

### Step 6: Scholarship (`Logical Operator ||`)

Scholarship is awarded if:

* Percentage ≥ 90 **OR**
* Sports Certificate is `Y`

Print:

```text
Scholarship: YES
```

or

```text
Scholarship: NO
```

---

### Step 7: Category (Ternary Operator)

Print:

```text
Adult
```

or

```text
Minor
```

using **only** the ternary operator (`?:`).

---

### Step 8: Menu (`switch`)

Display:

```text
1. View Student Details
2. View Result
3. View Scholarship Status
4. Exit
```

Take the user's choice and use a `switch` statement.

* **Option 1:** Print all student details.
* **Option 2:** Print total, percentage, grade, and pass/fail.
* **Option 3:** Print scholarship status.
* **Option 4:** Print `Thank You!`
* **Default:** Print `Invalid Choice`.
*/

#include<stdio.h>

void print1() {
    int roll,age,mos1,mos2,mos3,mos4,mos5;
    char name[50],sport,grade;
    float percentage;
    

    printf("Name:");
    scanf("%s", name);

     printf("\nRoll no:");
    scanf("%d", &roll);
    
     printf("\nAge:");
    scanf("%d", &age);
    
     printf("\nMarks of Subject 1:");
    scanf("%d", &mos1);
    
    printf("\nMarks of Subject 2:");
    scanf("%d", &mos2);
    
    printf("\nMarks of Subject 3:");
    scanf("%d", &mos3);
    
    printf("\nMarks of Subject 4:");
    scanf("%d", &mos4);
    
    printf("\nMarks of Subject 5:");
    scanf("%d", &mos5);

    printf("\nSports Certificate:");
    scanf(" %c", &sport);

    percentage = (mos1 + mos2 + mos3 + mos4 + mos5)/5.0;
     
    // TOTAL MARKS
    printf("\nTotal Marks: %d", mos1 + mos2 + mos3 + mos4 + mos5);
    //PERCENTAGE
    printf("\nPercentage: %0.2f", percentage);

    //IF USE   for elligibilty
    if (age>=18)
    {
        printf("\nYou are Elligible to drive");
    }
    else
    printf("\nYou are not elligible");

   //ELSE IF     GRADE 
   if (100 >= percentage && 90 < percentage)
   {
    grade = 'S';
   }
   else if (80 <= percentage)
   {
    grade = 'A';
   }
   else if (70 <= percentage)
   {
    grade = 'B';
   }
   else if (60 <= percentage)
   {
    grade = 'C';
   }
   else if (50 <= percentage)
   {
    grade = 'D';
   }
    else 
    grade = 'F';
     printf("\nGrade: %c\n", grade);
    
   // || USE
   if (percentage>= 90.00 || sport == 'Y' )
   {
    printf("\nScholarship: YES");
   }
   else 
   printf("\nScholarship: NO");
    
   // ternary   category
    age>=18?printf("\nAdult"):printf("\nMinor");
     
    }

int main() {
    print1();
    return 0;
}