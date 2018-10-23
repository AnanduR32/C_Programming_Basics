#include<stdio.h>
int i,k,j,choice,limit,arR[30][30],arN[30][30],arN1[30][30],sum=0;
char ch;
void main()
{
	do
	{
		printf("Enter choice :\n\t1.Add\n\t2.Multiply\n\t3.Transpose");
		scanf("%d",&choice);
		printf("Enter the number of rows and columns");
		scanf("%d",&limit);
		for(k=0;k<2;k++){
			for(i=0;i<limit;i++){
				for(j=0;j<limit;j++){
					if(k==0)
						scanf("%d",&arN[i][j]);
					else						
						scanf("%d",&arN1[i][j]);
				}
			}
			if(choice==3)
				break;
		}
		if(choice==1){
			for(i=0;i<limit;i++){
				for(j=0;j<limit;j++)
					arR[i][j]=arN1[i][j]+arN[i][j];
			}
		}
		else if(choice==2)
		{
			for(k=0;k<limit;k++){
				for(i=0;i<limit;i++){
					for(j=0;j<limit;j++)
						sum=sum+(arN[k][j]*arN1[j][i]);
				arR[i][k]=sum;
				sum=0;
				}
			}
		}

		else{
			for(i=0;i<limit;i++){
				for(j=0;j<limit;j++)
					arR[i][j]=arN[j][i];
			}
		}
		printf("\nThe resultant matrix is :\n");						
		for(i=0;i<limit;i++){
				for(j=0;j<limit;j++)
					printf("%d ",arR[i][j]);
				printf("\n\n");
		}
		printf("press enter key to close");
	}while(getchar!="\n");
}	
