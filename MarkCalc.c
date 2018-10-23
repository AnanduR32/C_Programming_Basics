#include<stdio.h>
void main()
{
	int series1,series2,series3,asg1,asg2,asg3,asg,exam,final,bonus=0;	
	printf("Enter the marks obtained :\nSeries 1 : ");
	scanf("%d",&series1);
	printf("Series 2 : ");
	scanf("%d",&series2);
	printf("Assignment 1 : ");
	scanf("%d",&asg1);
	printf("Assignment 2 : ");
	scanf("%d",&asg2);
	printf("Assignment 3 : ");
	scanf("%d",&asg3);	
	asg=(asg1+asg2+asg3)/3;
	exam=series1+series2;
	final=asg+exam;
	if(asg==10 && exam>=36 && final<=48)
		bonus=2;
	else if((asg!=10 && exam<36)||(final==50))
		bonus=0;
	else if(final==49)
		bonus=1;
	printf("The final marks is %d",(final+bonus));
	printf("\n");
}

	
	
