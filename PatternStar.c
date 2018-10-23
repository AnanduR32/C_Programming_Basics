#include<stdio.h>
void main()
{
	int i=0,j=0,row=0;
	printf("Enter the number of rows that are to be printed for the triangle : ");
	scanf("%d",&row);
	for(i=1 ; i<=row ; i++)
	{
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
}
