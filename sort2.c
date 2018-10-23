#include<stdio.h>
void main()
{
	int limit,arN[30],i,j,temp;
	printf("How many items in array?");
	/*******************************************
	*				ENTER LIMIT VALUE								*
	*																			*
	*******************************************/
	scanf("%d",&limit);	
	printf("Enter the elements");
	/*******************************************
	*				INPUT DATA											*
	*																			*
	*******************************************/
	for(i=0;i<limit;i++)		
		scanf("%d",&arN[i]);
	/*******************************************
	*				SORTING												*
	*																			*
	*******************************************/
	for(i=0;i<limit;i++){		
		for(j=i;j<limit;j++){
			if(arN[i]>arN[j]){
				temp=arN[i];
				arN[i]=arN[j];
				arN[j]=temp;
			}
		}
	}
	/*******************************************
	*				RESULT													*
	*																			*
	*******************************************/
	for(i=0;i<limit;i++)
		printf("%d ",arN[i]);
	printf("\n");

}		
