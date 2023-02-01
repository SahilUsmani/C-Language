#include<stdio.h>
#include<math.h>
void main()
{
int n, r, soc=0, temp;
printf("enter the number: ");
scanf("%d",&n);
temp=n;
while(n>0)
{
	r=n%10;
	soc=soc+(r*r*r);
	n=n/10;
}
if(soc==temp)
{
	printf("The number is an Armstrong number \n");
}
else
{
	printf("The number is not an Armstrong number \n");
}
}
