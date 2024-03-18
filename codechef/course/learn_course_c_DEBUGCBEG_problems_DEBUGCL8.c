/*Incorrect Conditionals
Incorrect conditionals are one of the most common types of logical errors. They occur when you put an incorrect condition in if-else.

Example
The code below is supposed to do the following

If an integer is even, then output even
If an integer is odd, then output odd
int n = 10;
if (n % 2 == 0) {
    printf("odd");
} else {
    printf("even");
}
The above code is incorrect because it outputs odd when the number is even. Changing the if condition will fix the error.

Task
Given a program to check whether a number is greater then 5 or not.

Run the code without changing anything, it will give wrong answer.
Find the wrong condition and correct it.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 5) {
        printf("the number is greater than 5");
    } else {
        printf("the number is smaller than or equal to 5");
    }
}
