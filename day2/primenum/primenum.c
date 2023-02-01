#include<stdio.h>
void main()
{
	int i, num, count=0;
	printf("enter the number: ");
	scanf("%d",&num);
	
       for(i=1;i<=num;i++)
       {
       	if(num%i==0)
		count++;
       }
       	if(count==2)
	{
		printf("\n This number is a prime number");
	}
	else
	{
		printf("\n This number is not a prime number");
	}
		printf("\n");

}
