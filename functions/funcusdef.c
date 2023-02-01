//This is a no return and no arg type user defined function
#include<stdio.h>
void fun(void);
void main()
{	
	fun();
}
void fun(void)
{	int n, sum;
	printf("enter the number: ");
	scanf("%d",&n);
	sum=n+10;
	printf("the result is %d \n",sum);
}


