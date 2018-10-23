#include<stdio.h>
#include<math.h>
void main()
{
	int sum=0,arN1[20][20],arN2[20][20],arR[20][20],i,j,m,n,x,y,limit,k,p,q,choice;
	char c;
	do
	{
		printf("\tEnter your choice :\n\t1.Addition of two Matrices\n\t2.Multiplication of two matrices\n\t3.Transpose of a matrix\n\n\t:");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter the number of rows and columns");
			scanf("%d",&limit);
			for(k=0;k<2;k++)
			{
				for(i=0;i<limit;i++)
				{
					for(j=0;j<limit;j++)
					{
					printf("Enter the value to array position (%d,%d) for array %d : ",i,j,k+1);
					if(k==0)
						scanf("%d",&arN1[i][j]);
					else
						scanf("%d",&arN2[i][j]);
					}
				}
			}
			for(i=0;i<limit;i++)
			{
				for(j=0;j<limit;j++)
					arR[i][j]=arN1[i][j]+arN2[i][j];
			}
			printf("\nThe resultant matrix is : \n"); 																										//result display
			i=0,j=0;
			for(i=0;i<limit;i++)
			{
					for(j=0;j<limit;j++)
				{
					printf("%d ",arR[i][j]);
				}
				printf("\n\n");
			}
		}
		else if(choice==2)
		{
			printf("Enter the number of rows and columns for the first matrix");
			scanf("%d%d",&m,&n);
			printf("Enter the number of rows and columns for the first matrix");
			scanf("%d%d",&p,&q);
			if(n==p)																																					//check if operation can be performed
			{
				for(i=0;i<m;i++)																																	//Array initialize
				{
						for(j=0;j<n;j++)
						{
						printf("Enter the value to array position (%d,%d) for array",i,j);
						scanf("%d",&arN1[i][j]);
						}
				}
				printf("\nArray 2 :\n")	;  																															//Array initialize
				for(x=0;x<p;x++)
				{
					for(y=0;y<q;y++)
					{
						printf("Enter the value to array position (%d,%d) for array",x,y);
						scanf("%d",&arN2[x][y]);
					}
				}
				for(i=0;i<m;i++){																																//perform operation
					for(j=0;j<n;j++){
						for(x=0;x<p;x++){
							sum=sum+arN1[i][x]*arN2[x][j];
						}
						arR[i][j]=sum;
						sum=0;
					}
				}
			}
			printf("The resultant matrix is : \n");																											//result display
			i=0,j=0;
			for(i=0;i<m;i++)
			{
				for(j=0;j<q;j++)
				{
					printf("%d",arR[i][j]);
				}
				printf("\n");
			}
		}
		else if(choice==3)
		{
			printf("Enter the order of matrix");
			scanf("%d%d",&p,&q);
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					printf("Enter the value to array position (%d,%d)",i,j);
					scanf("%d",&arN1[i][j]);
				}
			}
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					arR[i][j]=arN1[j][i];
				}
			}
			printf("The resultant matrix is : \n");
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					printf("%d ",arR[i][j]);
				}
				printf("\n\n");
			}
		}
		else
			printf("\nInvalid entry\n");
		printf("\n\tDo you wish to continue?\n\tPress n to stop");
		scanf(" %c",&c);
		if(c=='n')
			break;
	}while(1);

}
