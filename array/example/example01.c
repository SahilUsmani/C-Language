#include<stdio.h>
void main()
{
	int n,a[n],i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
//this program will give a segmentation fault
