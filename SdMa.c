#include<stdio.h>
#include<math.h>
void main()
{
	int numAr[30],i=0,sum=0,limit=0;
	float mean,sd,var;
	printf("Enter the number of items in array : ");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
		printf("\nEnter the %dth number\n",(i+1));
		scanf("%d",&numAr[i]);		
		sum+=numAr[i];
	}
	mean=sum/limit;
	//for(i=0;i<limit;i++)
	//{
	var+=pow(((mean-sum)/2)/limit,2);
	if(var<0)
		var=var*(-1);
	sd=pow(var,0.5);
	if(var<0)
		sd*=(-1);
	//}
	printf("The variance is %5.2f\nThe Standard Deviation is %5.2f\n",var,sd);
}
