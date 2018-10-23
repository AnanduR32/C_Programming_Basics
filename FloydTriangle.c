#include<stdio.h>
void main()
{
	int i=0,j=0,row=0,count=1;
	printf("Enter the number of rows that are to be printed for the triangle : ");
	scanf("%d",&row);
	for(i=0 ; i<=row ; i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",count);
			count++;
		}	
		printf("\n");
	}
}

