/*Creating Arrays
Arrays are used to store multiple items of the same type together.

An array is defined by specifying the type of its elements and the number of elements it will hold. For example, int numbers[5]; declares an array numbers that can hold five integers.

You can set values at the time of declaration, like int numbers[5] = {1, 2, 3, 4, 5};. Here, each element in the array numbers gets the corresponding value.

Example:

int numbers[5] = {1, 2, 3, 4, 5};
Task
Write a program which does the following

Create an Array of the first 5 positive integers
Once the array is define - output "Done" to the console.*/
#include <stdio.h>

int main(void) {
	int numbers[5] = {1, 2, 3, 4, 5};
    printf("Done");
}

