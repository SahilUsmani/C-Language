#include<stdio.h>
void func_passing(int x, int y, int z)
{
	printf("%d %d %d", x,y,z);
}
void main()
{
	int var=15;
	func_passing(var,var++,++var);
}
