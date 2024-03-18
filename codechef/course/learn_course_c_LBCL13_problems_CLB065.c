/*Parentheses
Let us take a look at the code from last problem.

int age = 25;
int voting_age = 18;

if (age >= voting_age) {
    printf("Old enough to vote!");
} else {
    printf("Not old enough to vote.");
}
To things to note here:

The condition age >= voting_age is inside parentheses ( ).
The printf statements are inside curly brackets { }.
The parentheses are mandatory after if statement, and the condition comes inside them. We use curly brackets in C to define scope. Because of the curly braces, C knows that it has to execute the print statement if the condition becomes true.

Task
You need to do the following

Run the code as is and read the error that you get
Add parentheses around the condition and then re-run the code*/


#include <stdio.h>

int main() {
    int age = 25;
    int voting_age = 18;
    
    if(age >= voting_age) {
        printf("Old enough to vote!\n");
    } else {
        printf("Not old enough to vote.");
        printf("Wait for %d years", voting_age - age);
    }
}
