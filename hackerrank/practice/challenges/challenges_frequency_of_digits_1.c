/*Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char s[1000];
    int i,j,k;
    gets(s);
    k=0;
    for(i=48;i<=57;i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]==i)
            k++;
        }
        printf("%d ",k);
        k=0;
    }    
    return 0;
}
