/*Runtime error due to 0 used as a divisor
We saw two different syntax errors in the last lesson. There are many different types of syntax errors, but they are generally easiest to debug as the error description clearly explains what needs to be fixed.

Let us now learn about Runtime errors

Runtime error
Runtime error occurs when your syntax is correct but the compiler is still not able to run the code due to an error.

Example:-

int a = 5; 
int b = 0; 
int c = a / b;
printf("%d", c);
If you run the above code, you will get runtime error. The error comes because we are trying to divide by zero, which is not a valid operation.

Task
There is a sample code present in IDE, which inputs two number and prints their division.
If you run the code for a test case like 3 0 you will get the runtime error.
To fix it, add an if condition which checks if the value of b is 0 and output infinity directly. Otherwise output the result of division.*/

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(b==0)
    {
        printf("infinity");
    }else
    {
        printf("division");
    }
}
