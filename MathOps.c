#include<stdio.h>
#include<math.h>
void main()
{
	int numAr[30],i=0,sum=0,limit=0;
	float mSq,mean,sd[30],var[30];
	printf("Enter the number of items in array : ");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
		printf("\nEnter the %dth number\n",(i+1));
		scanf("%d",&numAr[i]);		
		sum+=numAr[i];
	}
	mean=sum/limit;
	mSq=pow(mean,2);
	for(i=0;i<limit;i++)
	{
		var[i]=mSq-pow(numAr[i],2);
		if(var[i]<0)
			var[i]=var[i]*(-1);
		sd[i]=pow(var[i],0.5);
		if(var[i]<0)
			sd[i]=sd[i]*(-1);
	}
	printf("MEAN, VARIANCE, STANDARD DEVIATION - TABLE");
	printf("\n\n\tThe Mean Value is %d",mean);
	printf("\n\tNumber\tVariance\tStandard Deviation");
	for(i=0;i<limit;i++)
	{
		printf("\n\t%d\t%5.2f\t\t%5.2f",numAr[i],var[i],sd[i]);
	}
	printf("\n");
}
