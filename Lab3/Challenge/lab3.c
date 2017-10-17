/*
	CPSC 321 Lab3 - stdin, stdout and file I/O
	lab3.c
	September 29, 2017
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "lower_stream.h"

int main(int argc, char* argv[]) {

	FILE *stream = NULL;
	FILE *output = stdin;
	char *filename = NULL;

	int arg;
	//the colon in "f:" indicates that the f argument requires a parameter
	while ((arg = getopt (argc, argv, "f:, o:")) != -1) {
		switch(arg){
			case 'f':
				//Open the file name passed in
				filename = optarg;
				stream = fopen(filename, "r");
				break;
			case 'o':
				filename = optarg;
				output= fopen(filename, "a+");
			default:
				//Error occured
				exit(1);
		}
	}

	//if Stream is not null we have a file
	if(stream != NULL) {
		lower_stream(stream, output);
		fclose(stream);
		fclose(output);
	}
	else {
		stream = stdin;
		lower_stream(stream, output);
	}
	
	return 0;
}
