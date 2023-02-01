#include<stdio.h>
void main()
{
	char arr[10];
	int i,num_of_letters;

	printf("Enter the number of letters: ");
	scanf("%d",&num_of_letters);

	for(i=0;i<num_of_letters;i++)
	{
		scanf("%c",&arr[i]);
	}
	for(i=0;i<num_of_letters;i++)
	{
		printf("%c",arr[i]);
	}
}
