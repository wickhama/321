/*
	CPSC 321, September 22, 2017
	square.c
	Ayla Wickham, 230111051
*/

//When  a function is called by value a copy of the variable is made. 
int square_value(int x) {
	int p = x * x;
	return p;
}

//When a function is called by reference the memory address of the variable is passed.
int square_reference(int *x_ptr) {
	
	//Multiply the value at *x_ptr by the value at *x_ptr
	int p = *x_ptr * *x_ptr;
	return p;
}

