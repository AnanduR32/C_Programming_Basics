#include<stdio.h>
#include<math.h>
void main()
{
	int arN[20][20],i,j,limit,flag=0;
	printf("Enter the number of rows and columns");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			printf("Enter the value to array position (%d,%d)",i,j);
			scanf("%d",&arN[i][j]);
		}
	}
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			if(arN[i][j]!=arN[j][i])
				flag=1;
				break;
		}
	}
	if(flag!=1)
		printf("The matrix is symmetrical\n");
	else
		printf("The matrix is asymmetrical\n");
}
