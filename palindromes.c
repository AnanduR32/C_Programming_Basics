#include<stdio.h>
#include<string.h>
void main()
{
	char s[30],r[30];
	int i,j,r,s;
	printf("Enter the string");
	while((s[i++]=getchar())!="\n");
	r=strrev(s);
	if(strcmp(r,s)==0)
		printf("Palindrome");
	else
		printf("not palindrome");
}
