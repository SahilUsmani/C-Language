#include<stdio.h>
void main()
{
int i=10,*p,*q;
p=&i;
q=p;
printf("%d  %d",*p,*q);
}
