#include<stdio.h>
void main()
{
	int numAr[30],i=0,num=0,limit=0,count=0;
	printf("Enter the number of items in array : ");
	scanf("%d",&limit);
	printf("Enter the number whose occurance in the array is to be counted : ");
	scanf("%d",&num);	
	for(i=0;i<limit;i++)
	{
		printf("\nEnter the %dth number",(i+1));
		scanf("%d",&numAr[i]);
		if(numAr[i]==num)
			count++;
	}
	printf("\nThe total number of occurance of the %d in the array is %d\n",num,count);
}
	
