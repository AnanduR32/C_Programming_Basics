#include<stdio.h>
#include<stdlib.h>
void main(int argc, char* argv[])
{
  if(argc!=5)
  {
    printf("The required number of arguments not specified");
    exit(0);
  }
  int i,sum=0;
  printf("Addition : \nSum of ");
  for(i=1;i<=4;i++)
  {
    printf("%d ",atoi(argv[i]));
    sum+=atoi(argv[i]);
  }
  printf(" is equal to %d",sum);
}
