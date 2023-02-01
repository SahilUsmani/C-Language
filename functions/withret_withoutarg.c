//This is an example of user define function with return and without arg type
#include<stdio.h>
int fun(void);
void main()
{
	printf("the result is %d \n",fun());
}
int fun(void)
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	return n+10;
}
