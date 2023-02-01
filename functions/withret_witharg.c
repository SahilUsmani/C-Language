//This is an example of user defined function with return and with arguments type
#include<stdio.h>
int fun(int);
void main()
{	
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("the result is %d \n",fun(n));
}
int fun(int n)
{
	return n+10;
}
