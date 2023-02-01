/* Program to find out the size and limits of data types */

#include<stdio.h>

int main(void)
{
	printf("size of char = %lu\n", sizeof(char));
	printf("size of short = %lu\n", sizeof(short));
	printf("size of int = %lu\n", sizeof(int));
	printf("size of long = %lu\n", sizeof(long));
	printf("size of float = %lu\n", sizeof(float));
	printf("size of double = %lu\n", sizeof(double));
	printf("size of long double = %lu\n", sizeof(long double));

	return 0;
}
