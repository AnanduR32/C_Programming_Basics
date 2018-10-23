#include<stdio.h>
void main()
{
	int num,digit,result=0;
	printf("Enter the number that is to be reversed\n");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		result=result*10+digit;
		num/=10;
	}
	printf("The reversed number is %d\n",result);
}


