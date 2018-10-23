#include<stdio.h>
void main()
{
	int limit,arN[30],i,j,temp,term,pos,ar2[30];
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
		for(j=0;j<limit-i-1;j++){
			if(arN[j]>arN[j+1]){
				temp=arN[j];
				arN[j]=arN[j+1];
				arN[j+1]=temp;
			}
		}
	}
	/*******************************************
	*				INSERTION OF ELEMENT						*
	*																			*
	*******************************************/
	printf("Enter the position to which you'd like to insert");
	scanf("%d",&pos);
	pos-=1;
	printf("Enter the number you'd like to insert to the position %d :",pos);
	scanf("%d",&term);
	for(j=0,i=pos;i<limit;j++,i++)
		ar2[j]=arN[i];
	arN[pos]=term;
	for(i=(pos+1),j=0;i<(limit+1);i++,j++)
		arN[i]=ar2[j];
	/*******************************************
	*				RESULT													*
	*																			*
	*******************************************/
	for(i=0;i<limit+1;i++)
		printf("%d ",arN[i]);
	printf("\n");
}		
