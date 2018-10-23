#include<stdio.h>
void main()
{
	int limit,arN[30],i,j,temp,term,pos,ar2[30],ch=0;	
	do
	{	
		printf("\n\t\tEnter your choice :\n\t1.Enter data\n\t2.Insert a new element\n\t3.Delete an element\n\t");
		scanf("%d",&ch);
		if(ch==1){
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
			*				RESULT													*
			*																			*
			*******************************************/
			for(i=0;i<limit-1;i++)
				printf("%d ",arN[i]);
			printf("\n");
		}
		else if(ch==2){		
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
			for(i=0;i<limit-1;i++)
				printf("%d ",arN[i]);
			printf("\n");
		}
		else if(ch==3){
			/*******************************************
			*				DELETION  OF ELEMENT						*
			*																			*
			*******************************************/
			printf("Enter the position to which you'd like to delete");
			scanf("%d",&pos);
			pos-=1;
			for(j=0,i=pos+1;i<limit;j++,i++)
				ar2[j]=arN[i];
			for(i=pos,j=0;i<(limit+1);i++,j++)
				arN[i]=ar2[j];
			/*******************************************
			*				RESULT													*
			*																			*
			*******************************************/
			for(i=0;i<limit-1;i++)
				printf("%d ",arN[i]);
			printf("\n");
		}
		printf("Do you wish to continue?\n\tTo continue press 'y' else press 'n'");
		if(getchar()=='n')
			break;
	}while(1);			
}
			
				
