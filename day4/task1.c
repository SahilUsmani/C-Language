#include<stdio.h>
void main()
{
	int i,j=5;
	printf("the size of unsigned: %lu\n",sizeof(i));
	printf("the size of signed: %ld\n",sizeof(i));
	printf("the size of long: %ld\n",sizeof(i));
	printf("the size of stored value unsigned: %lu\n",sizeof(j));
	printf("the size of stored value signed: %ld\n",sizeof(j));
	printf("the size of stored value long: %ld\n",sizeof(j));
}
