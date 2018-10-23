#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the co-ordinates : x,y\n\nEnter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	if(x>0 && y>0)
		printf("The obj whose co-ordinates are (%d,%d) is located in the 1st quadrant",x,y);
	else if(x>0 && y<0)
		printf("The obj whose co-ordinates are (%d,%d) is located in the 4th quadrant",x,y);
	else if(x<0 && y>0)
		printf("The obj whose co-ordinates are (%d,%d) is located in the 2nd quadrant",x,y);
	else if(x<0 && y<0)
		printf("The obj whose co-ordinates are (%d,%d) is located in the 3rd quadrant",x,y);
	else if(x==0)	
		printf("The obj is located on the x axis");
	else if(y==0) 
		printf("The obj is located on the y axis");
	else
		printf("Invalid Entry");
	printf("\n");
}
			
