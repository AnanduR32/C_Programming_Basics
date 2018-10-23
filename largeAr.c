#include<stdio.h>
void main()
{
	int large=0,numAr[20],i=0,limit;
	printf("Enter the limit value : ");
	scanf("%d",&limit);
	printf("\n");
	for(i=0;i<limit;i++)
	{
		printf("Enter the %dth value",i+1);
		scanf("%d",&numAr[i]);
		if(numAr[i]>large)
			large=numAr[i];
	}
	printf("\nThe biggest number is %d\n",large);
}

