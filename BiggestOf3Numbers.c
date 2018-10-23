#include<stdio.h>
void main()
{
	int num1,num2,num3;	
	printf("Enter the three numbers\nFirst number :");
	scanf("%d",&num1);
	printf("Second number :");
	scanf("%d",&num2);
	printf("Third number :");
	scanf("%d",&num3);
	if(num1>num2)
	{
		if(num1>num3)
			printf("The biggest number is %d",num1);
		else
			printf("The biggest number is %d",num3);
	}
	else 
	{
		if(num2>num3)
			printf("The biggest number is %d",num2);
		else
			printf("The biggest number is %d",num3);
	}
	printf("\n");
}
