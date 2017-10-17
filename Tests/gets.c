/* 
	Test gets fgets
*/

#include <stdio.h>

int main(void) {

	char str[60];

	printf("Enter a string: ");

	 while(fgets(str, 60, stdin) != NULL){
		puts("\n");
		puts(str);
		printf("Enter a string: ");
	}	

	return 0;
}

