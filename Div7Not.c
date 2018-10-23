#include<stdio.h>
void main()
{
	int i=0,num;	
	printf("Enter the upper limit till which numbers are to be displayed");
	scanf("%d",&num);
	while(i<=num)
	{
		if(i%7!=0)
			printf("%d\n",i);
		i++;
	}
printf("\n");
}
				
