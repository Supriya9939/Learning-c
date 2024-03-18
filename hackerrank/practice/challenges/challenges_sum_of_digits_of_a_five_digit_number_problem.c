/*Objective

The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and 12 % 10 = 2. The ordinary division operator, /, returns a truncated integer value when performed on integers. For example, 5 / 3 = 1. To get the last digit of a number in base 10, use  as the modulo divisor.

Task

Given a five digit integer, print the sum of its digits.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,s=0;
    scanf("%d", &n);
    while(n!=0)
    {
        s=s+(n%10);
        n=n/10;
    }
    printf("%d",s);
    return 0;
}
