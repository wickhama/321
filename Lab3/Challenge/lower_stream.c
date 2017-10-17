/*
	CPSC 321 Lab3 - stdin, stdout, file I/O
	lower_stream.c
	September 29, 2017
*/

#include "lower_stream.h"

void lower_stream(FILE* stream, FILE* output) {
	char c;

	do {
		c = getc(stream);
		putchar(tolower(c));
		fputc(tolower(c), output);
	}
	
	while(c != EOF);
}
