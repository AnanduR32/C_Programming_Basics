#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c;
	float D,d,real,imaginary,root1,root2;
	printf("Enter the values of a, b and c of the quadratic equation\n\nEnter value of a");
	scanf("%f",&a);
	printf("Enter the value of b");
	scanf("%f",&b);
	printf("Enter the value of c");
	scanf("%f",&c);
	D=(b*b)-(4.0*a*c);
	if(D>0)
	{	
		d=sqrt(D);
		printf("The roots exists and are real");
		root1=((-b+d)/(2.0*a));
		root2=((-b-d)/(2.0*a));
		printf("First root : %f",root1);
		printf("Second root : %f",root2);
	}	
	else if(D<0||D==0)
	{
		real=(-b/2*a);
		if(D<0)
		{
			d=(sqrt(-D));			
			imaginary=d/2.0*a;
			printf("First root : %5.2f+i%5.2f",real,imaginary);	
			printf("Second root : %5.2f-i%5.2f",real,imaginary);
		}		
		else
		{
			printf("The roots are real and equal\nThe roots are : %f and %f",real,real);
		}
	}
}
