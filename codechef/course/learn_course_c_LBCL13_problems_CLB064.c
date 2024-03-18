/*If & Else Statements
We use conditions in code for decision making and controlling the flow of a program.

if and else keywords can be used together to create conditions.

The syntax for this:

if (condition) {
    // code to run if the condition is true
} else {
    // code to run if the above condition is false
}
Condition can be any expression which you are trying to evaluate. A simple condition can be:

int a = 4;
int b = 5;
if (a == b) {
    printf("a and b are equal");
} else {
    printf("a and b are not equal");
}

// Output:
// a and b are not equal*/
#include <stdio.h>

int main() {
    int age = 25;
    int voting_age = 18;
    
    if (age!=voting_age) 
    {
        printf("Old enough to vote!");
    } else {
        printf("Not old enough to vote.");
}
}

