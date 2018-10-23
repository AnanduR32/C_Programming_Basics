#include<stdio.h>
#include<math.h>
void main()
{
	float x=1.0,y=0.0;
	printf("x\ty\n");
	while(x<=3.2)
	{
		y=1.36*sqrt(1+x+(x*x*x))+pow(x,(1/4))+exp(x);
		printf("%5.2f\t%5.2f\n",x,y);
		x+=0.2;
	}
printf("\n");
}
