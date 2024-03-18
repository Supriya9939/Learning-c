/*Given an array, of size , reverse it.

Example: If array, , after reversing it, the array should be, .

Input Format

The first line contains an integer, , denoting the size of the array. The next line contains  space-separated integers denoting the elements of the array.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }




    for(i = num-1; i >=0; i--)
        printf("%d ", *(arr + i));
    return 0;
}
