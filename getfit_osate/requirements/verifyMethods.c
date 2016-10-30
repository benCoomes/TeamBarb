#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int returnTrue(char * str) {

	if(strncmp(str, "true", 4) == 0) return 1;

	if(strncmp(str, "unsure", 6) == 0) return 0;

	if(strncmp(str, "false", 5) == 0) return -1;

	return -2;

}

int main(int argc, char ** argv) {

	printf("true = %d\n", returnTrue("true"));	
	printf("unsure = %d\n", returnTrue("unsure"));
	printf("false = %d\n", returnTrue("false"));

}