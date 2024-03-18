/*If Statement
The else statement is optional.

Here is an example

grade = 95;
if (grade >= 90) {
    printf("You got an A");
}

// Output
// You got an A
In the above program, if the condition is True, then the printf statement is executed.

Task
Write a program which does the following

Take input for two integer variables a & b
Output "Coding is Fun" to the console if a is greater than b.*/

#include <stdio.h>

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	    printf("Coding is Fun");
	}
    
}

