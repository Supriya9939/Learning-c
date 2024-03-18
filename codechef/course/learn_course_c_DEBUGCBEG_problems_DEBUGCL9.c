/*ncorrect Index
Strings in C have zero-based indexing. This means that the first index is 0. It is easy to forget that and use one-based indexing instead. This incorrect indexing leads to another logical error.

Program to print the last character of the string

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input length of the string

    char s[100];
    scanf("%s", &s);  // Input string
    
    printf("%c\n", s[n-1]); // correct way to access the n-th character
    printf("%c\n", s[n]);   // incorrect way
}
Task
Give a program to print 1st, 4th and 6th character of a string
Find out the logical error and solve it*/

#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", &s);

    // Check if the string has at least 7 characters
    if (strlen(s) >= 7) {
        printf("%c%c%c\n", s[0], s[3], s[5]);
    } else {
        printf("Input string is too short\n");
    }
    
}
