/*
	CPSC 321, September 22, 2017
	swap.c
	Ayla Wickham, 230111051
*/

#include <stdio.h>
int swap(int *x, int *y);
int main() {

	printf("Enter two numbers: ");
	int numb1 = 0;
	int numb2 = 0;

//	int *numbptr1 = &numb1;
//	int *numbptr2 = &numb2;

	scanf("%d", &numb1);
	scanf("%d", &numb2);

	printf("The address of %d is: %p\n", numb1, &numb1);
	printf("the address of %d is: %p\n", numb2, &numb2);

	swap(&numb1, &numb2);

	printf("The address of %d is: %p\n", numb1, &numb1);
	printf("the address of %d is: %p\n", numb2, &numb2);


	return 0;
}

int swap(int *x, int *y) {
	int swap = *x;
	*x = *y;
	*y = swap;
	
	return 0;
}
