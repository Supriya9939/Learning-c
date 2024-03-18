/*Compilation error continued
How do you identify 'Compilation error'?

When you run your code and there is an error, you will typically see it in the output.

For example if you run the below code, you will get a syntax error.

#include <stdio.h>

int main() {
  int number = 19;
  printf("%d\n", number)
}
Error

sol.c: In function ‘main’:
sol.c:5:25: error: expected ‘;’ before ‘}’ token
    5 |   printf("%d\n", number)
      |                         ^
      |                         ;
    6 | }
      | ~                              
The error description says that there is a error on line 5 and character 25. The exact error is explained on the 2nd line of the description: error: expected ‘;’ before ‘}’ token.

It is clearly saying that a ; (semicolon) is expected before the } closing curly braces.

Task
Submit the code present in IDE as it is.
Read the error statement and understand what needs to be fixed.
Fix the code so that it correctly outputs: 15*/

#include <stdio.h>

int main() {
   int a = 5;
   int b = 3;
   
   scanf("%d %d", &a, &b);  
   printf("%d", a * b);
}
