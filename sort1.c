#include<stdio.h>
#include<string.h>
int limit,i,j;
struct strings
{
	char str[20];
}p[100];
void sort(void);
void read(void);
void display(void);
void main()
{
	read();
	sort();
	display();
}
/*******************************************
*				INPUT DATA				   *
*										   *
*******************************************/
void read(void)
{
	printf("How many strings in array?");
	/*******************************************
	*				ENTER LIMIT VALUE	       *
	*										   *
	*******************************************/
	scanf("%d",&limit);
	printf("Enter the strings");
	for(i=0;i<limit;i++)
		scanf("%s",&p[i].str);
}
/*******************************************
*				SORTING					   *
*										   *
*******************************************/
void sort(void)
{
	char temp[20];
	for(i=0;i<limit;i++){
		for(j=0;j<limit-i-1;j++){
			if((strcmp(p[j].str,p[j+1].str))<0){
				strcpy(temp,p[j].str);
				p[j].str[0]='\0';
				strcpy(p[j].str,p[j+1].str);
				p[j+1].str[0]='\0';
				strcpy(p[j+1].str,temp);
				temp[0]='\0';
			}
		}
	}
}
void display(void)
{
	/*******************************************
	*				RESULT		     		   *
	*								           *
	*******************************************/
	for(i=0;i<limit;i++)
		printf("%s ",p[i].str);
	printf("\n");
}
