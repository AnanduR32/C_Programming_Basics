#include <stdio.h>
float pf,hra,da,grossSalary,basic;
void main()
{
	printf("Enter your basic salary");
	scanf("%f",&basic);
	if(basic>10000)
	{
		hra=1000;
	 	pf=(basic*0.02);
		da=(basic*0.1);
		grossSalary=basic+da+hra-pf;	
	}
	else
	{
		hra=2000;
	 	pf=(basic*0.05);
		da=(basic*0.12);
		grossSalary=basic+da+hra-pf;
	}
	printf("The Gross Salary of the Employee is %5.2f",grossSalary);
} 
