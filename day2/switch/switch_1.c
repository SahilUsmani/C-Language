#include<stdio.h>
void main()
{
	int a, b, s, v;
	char op;
	printf("enter two numbers : \n");
	scanf("%d %d", &a,&b);
	printf("\n there are only addition and subtraction");
	printf("\n enter operation");
	scanf(" %c", &op);//use space between first quotation and % otherwise it doesn't read the char variables
	
	switch(op)
{
	case '+':
	s=a+b;
	printf("Its addition and the result is: %d", &s);
	break;

	case '-':
	v=a-b;
	printf("Its subtraction and the result is: %d", &v);
	break;
}
}
