/*
	CPSC 321, September 22, 2017
	lab2.c
	Ayla Wickham, 230111051
*/

#include <stdio.h>
#include "square.h"

int main() {
	
	printf("Enter a number to square: ");
	int number = 0;

	int *number_ptr = &number;

	//Read number from keyboard.
	scanf("%d", &number);
	printf("\n");

	//Call by value
	printf("Call by value result: %d\n", square_value(number));

	printf("\n");
	//Call by reference
	printf("Call by reference result: %d\n", square_reference(number_ptr));
	printf("\n");

	printf("The address number ptr is pointing to: %p\n", number_ptr);
	printf("\n");

	printf("The value of number ptr is: %d\n", *number_ptr);
	printf("\n");

	int num_array[4] = {10, 20, 30, 40};

	//set a pointer to the first address in the array num_array[4]
	int *array_ptr = num_array;

	//Count from zero to three and move the pointer
	//The purpose of this loop is to show how to iterate over an array using a pointer!
	for(int i=0; i<=3; ++i, ++array_ptr) {
		//This line increases the value stored where the pointer is pointing.
		*array_ptr;

		printf("num_array[%d] address: %p value: %d\n", i, array_ptr, *array_ptr);
	}
	return 0;
}
