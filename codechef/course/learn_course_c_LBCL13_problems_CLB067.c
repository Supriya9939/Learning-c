/*Else If Statement
In cases where you have to check for multiple conditions and run some code based on each, you have to use else if.

The else if keyword means "if the previous conditions were not true, then try this condition"

The following example illustrates usage of else if.

grade = 85;
if (grade >= 90) {
    printf("You got an A");
} else if (grade >= 80) {
    printf("You got a B");
}

// Output
// You got a B
The code above works as follows

If grade >= 90, then it will output: You got an A
If grade is between 80 and 90 - it will output: You got a B
If grade is less than 80 - there will be no output
Task
Write a program which does the following

Take two integers b and r as input
Print "Rob scored higher marks than Bob", if r is greater than b
Print "Bob & Rob both scored the same", if both b and r are equa*/

#include <stdio.h>

int main() {
    int b, r;
    scanf("%d", &b);
    scanf("%d", &r);
    if(r>b)
    {
        printf("Rob scored higher marks than Bob");
    }
    else if(r==b)
    {
        printf("Bob & Rob both scored the same");
    }
}

