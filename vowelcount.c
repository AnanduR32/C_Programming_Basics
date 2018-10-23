#include<stdio.h>
void main()
{
	int i,n,count=0;	
	char str[30];
	printf("Enter the num");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(" %c",&str[i]);
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
			count++;
	}
	printf("The num of vowel is %d",count);
}

	
