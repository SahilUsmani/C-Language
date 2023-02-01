/* EXAMPLE OF POST FIX AND PREFIX */

#include<stdio.h>
int i;
void main()
{
  	//the default value of local variable is zero that's why the output will be one zero one
	i++;
	printf("%d ",i);
	i--;
	printf("%d ",i);
	++i;
	printf("%d ",i);
}
