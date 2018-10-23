#include<stdio.h>
void main()
{	
	int limit,i,sum=0,rev=0,choice;
	char c;	
	lab:
	printf("Enter your choice \n");
	printf("1.Display numbers till n that are not divisible by 7 \n");
	printf("2.Find reverse of a number and display sum of digits\nEnter your choice \n:");
	scanf("%d",&choice);
	switch(choice)
	{	
		case 1:
			printf("Displaying +ve integers who are not divisible by 7\nEnter the upper limit till which numbers are to be displayed ");
			scanf("%d",&limit);
		for(i=1;i<=limit;i++)
			{
				if(i%7!=0)
					printf("%d",i);
				if(i==limit)
					printf(".\n");
				else
					printf(", ");
			}
			break;
		case 2:
			printf("Finding Reverse of a number and displaying the sum of digits\nEnter the number : ");
			scanf("%d",&limit);
			while(limit!=0)
			{
				sum+=limit%10;
				rev=rev*10+limit%10;
				limit/=10;
			}
			printf("The sum of digits is %d\n The reversed number is %d",sum,rev);
			break;
		default:
			printf("Invalid entry!\tDo you wish to retry\n\tPress y to retry else press any other character");
			c=getchar();
			if(c=='y')
				goto lab;
			break;
	}
	if(choice==1||choice==2)
		printf("\tDo you wish to retry?\n\tPress y to retry else press enter button");
		c=getchar();
		if(c=='y')
			goto lab;	
	printf("\n");
}
