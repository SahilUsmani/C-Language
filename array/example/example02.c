#include<stdio.h>
void main()
{
	int a[5],i;
//to take the input for the array you need to do this
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
//to print that input
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
//this program will give a segmentation fault
