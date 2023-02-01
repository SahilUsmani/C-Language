#include<stdio.h>
void unryandlog(void);
void unryandlog1(void);
void unryandlog2(int, int, int, int);
void unryandlog3(int, int, int, int);
void unryandlog4(int, int, int, int);
void main()
{
	int n,i=0,j=0,k=0;
	 unryandlog();
	 unryandlog1();
	 unryandlog2(n,i,j,k);
	 unryandlog3(n,i,j,k);
	 unryandlog4(n,i,j,k);
}
void unryandlog(void)
{
	int n,i=0,j=1,k=1;
	n=i++||j++||k++;
	printf("the result is %d %d %d %d \n",n,i,j,k);
}
void unryandlog1(void)
{
	int n,i=0,j=1,k=1;
	n=i++&&j++||k++;
	printf("the result is %d %d %d %d \n",n,i,j,k);
}
void unryandlog2(int n, int i, int j, int k)
{
	n=i++&&j++&&k++;
	printf("the result is %d %d %d %d \n",n,i,j,k);
}
void unryandlog3(int n, int i, int j, int k)
{
	n=i++||j++||k++;
	printf("the result is %d %d %d %d \n",n,i,j,k);
	
}
void unryandlog4(int n, int i, int j, int k)
{
	n=i++||j++&&k++;
	printf("the result is %d %d %d %d \n",n,i,j,k);
}

