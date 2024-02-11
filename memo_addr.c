#include <stdio.h>

int main() {

	int a = 100;
	int b = 1000;
	int c = 10000l;

	printf("The memory address of a is %p\n", &a);
	printf("The memory address of b is %p\n", &b);
	printf("The memory address of c is %p\n", &c);

	return 0;

}

//This program will show the memory address of the assigned variables
// %p is the format specifiers (most used in pointer)
// This program that I wrote is only for beginners
// Owned by PERFECT-X
