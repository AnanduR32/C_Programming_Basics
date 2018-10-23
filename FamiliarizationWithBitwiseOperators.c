#include<stdio.h>
void main()
{
	int num;
	printf("Enter any number");
	scanf("%d",&num);
	int ls=num<<1;
	int rs=num>>1;
	int inv=num^1;
	int so=sizeof(num);
	int an=num&10;
	int on=num|10;
	printf("\nLeft shift : %d\nRight Shift : %d\nXOR value : %d\nSize Of : %d\nBitwise and : %d\nBitwise Or : %d\n",ls,rs,inv,so,an,on);
}
