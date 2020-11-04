#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 521;
	int *ptr = &i; 
	
	printf("&i: %u \n", &i);
	printf("i: %i \n", i);
	printf("*ptr: %i \n", *ptr);
	printf("ptr: %u \n", ptr);
	return 0;
}
