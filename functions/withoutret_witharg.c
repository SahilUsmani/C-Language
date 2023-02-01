//This is an example of user defined function without return and with arg type
#include<stdio.h>
void fun(int);
void main()
{	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	fun(n);
}
void fun(int n)
{
	int sum;
	sum=n+10;
	printf("the result is %d \n",sum);
}
