#include<stdio.h>
#include<stdlib.h>
void main(int argc, char* argv[])
{
char ch;
  FILE *f1,*f2;
  if(argc!=3){
    printf("The required number of arguments havent been specified");
    exit(0);
  }
  f1=fopen(argv[1],"r");
  f2=fopen(argv[1],"w");
  if((f1==NULL)||(f2==NULL)){
    printf("File doesn't exists");
    exit(0);
  }
  while(!feof(f1))
  {
    ch=fgetc(f1);
    fputc(ch,f2);
  }
  fclose(f1);
  fclose(f2);
}
