#include<stdio.h>
#include<math.h>
void main()
{
	int arN[20][20],i,j,limit,sum=0;
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
			if(i==j)
				sum+=arN[i][j];
		}
	}
	printf("The sum of diagonal values is %d\n",sum);
}
