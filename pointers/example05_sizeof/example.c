#include<stdio.h>
void main()
{
	int a[10], i;
	int *ptr;
	ptr = &i;

	printf("%ld\n", sizeof(ptr));
	printf("%ld\n", sizeof(int *));
	printf("%ld\n", sizeof(char *));
	printf("%ld\n", sizeof(float *));
	printf("%ld\n", sizeof(void *));
	printf("%ld\n", sizeof(a));
}

