#include<stdio.h>
void main()
{
	int num1=0,num2=0;
	char operator;
	float result=0;
	printf("Enter the first number");
	scanf("%d",&num1);
	printf("Enter the second number");
	scanf("%d",&num2);
	printf("Enter the operator which you'd like to use to operate the opernads %d,%d",num1,num2);
	scanf(" %c",&operator);	
	//operator=getchar();
	switch(operator)
	{
		case'+':result=num1+num2;
			break;
		case'-':result=num1-num2;
			break;
		case'*':result=num1*num2;
			break;
		case'/':result=num1/num2;
			break;
		default:printf("Invalid operator");
			break;
	}
	printf("\nThe resultant of %c operator on numbers %d and %d is %5.2f\n",operator,num1,num2,result);
}
