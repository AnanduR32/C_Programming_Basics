#include<stdio.h>
void main()
{
	int limit,arN[30],term,flag=0,i,j,middle,left=0,right,temp;
	printf("How many items in array?");
	/*******************************************
	*						INPUT DATA									*
	*																			*
	*******************************************/
	scanf("%d",&limit);	
	right=limit;
	printf("Enter the elements");
	for(i=0;i<limit;i++)
		scanf("%d",&arN[i]);
	/*******************************************
	*						SORTING										*
	*																			*
	*******************************************/
	for(i=0;i<limit;i++){		
		for(j=0;j<limit-i-1;j++){
			if(arN[j]>arN[j+1]){
				temp=arN[j];
				arN[j]=arN[j+1];
				arN[j+1]=temp;
			}
		}
	}
	/*******************************************
	*							SEARCHING 								*
	*																			*
	*******************************************/
	printf("enter the search term");
	scanf("%d",&term);
	while(flag=0){
		middle=(left+right)/2;
		if(arN[middle]=term)
			flag=middle;
		else if(arN[middle]>term)
			left=middle+1;
		else if(arN[middle]<term)
			right=middle-1;
		else
			continue;
	}
	/*******************************************
	*					RESULT												*
	*																			*
	*******************************************/
	if(flag=0)
		printf("Entered search term is not found\n");
	else
		printf("Entered search term is found at position %d \n",flag);	
}		
