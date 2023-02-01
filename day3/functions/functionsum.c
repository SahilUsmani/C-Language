#include<stdio.h>
int sumoff(int , int , int );
void main()
{	int sum;
	sum=sumoff();
	printf("the sum is %d", sum);
}
int sumoff(int x,int y,int sum)
{	printf("enter two numbers:");
	scanf("%d %d", &x, &y);
	sum=x+y;
	return sum;
}
