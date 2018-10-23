#include<stdio.h>
#include<math.h>
void main()
{
	int x,y,c;
	float result=0.0;
	printf("Enter the value of x \n");
	scanf("%d",&x);
	if(x<0)
		c=x/(-x);
	else
		c=x/x;
	switch(c)
	{
		case -1: result=sqrt(-(1-x*x));
			break;
		case  1: result=sqrt(1+x*x);
			break;
		default: result=0;
			break;
	}
	result=1/result;
	printf("%f",result);
printf("\n");
}
