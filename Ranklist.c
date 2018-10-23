#include<stdio.h>
#include<string.h>
int limit;
struct student
{
  char name[30],adNo[10];
  int rank,roll;
  float marks;
  struct personal
  {
    int dob[3];
    char house[75],street[30],locality[15];
  }p;
  struct Space
  {
    char s1[4],s2[75],s3[30];
  }space;
}s[120];
void read(void);
void order(void);
void display(void);
void main()
{
  printf("Student Rank List entry\n");
  read();
  order();
  display();
}
/******************************************
*                                         *
*       Input Student Database            *
*                                         *
******************************************/
void read(void)
{
  int i=0,j=0,val,len1,len2;
  char Name[15];
  printf("\nEnter the number of students in class");
  scanf("%d",&limit);
  for(i=0;i<limit;i++)
  {
    printf("Enter the name of student whose roll no. is %d: ",i+1);
    printf("Enter Surname : ");
    scanf("%s",&s[i].name);
    printf("Enter Last Name : ");
    scanf("%s",&Name);
    strcat(s[i].name," ");
    strcat(s[i].name,Name);
    s[i].rank=i+1;
    s[i].roll=i+1;
    printf("Enter Marks scored in sessional exam(out of 50) : ");
    scanf("%d",&s[i].marks);
    printf("Enter Date of Birth (in format DD-MM-YY) : ");
    scanf("%d%d%d",&s[i].p.dob[0],&s[i].p.dob[1],&s[i].p.dob[2]);
    printf("Enter house name : ");
    scanf("%s",&s[i].p.house);
    printf("Enter street adress : ");
    scanf("%s",&s[i].p.street);
    printf("Enter locality : ");
    scanf("%s",&s[i].p.locality);
    strcat(s[i].p.house,", ");
    strcat(s[i].p.house,s[i].p.street);
    strcat(s[i].p.house,", ");
    strcat(s[i].p.house,s[i].p.locality);
    s[i].p.house[strlen(s[i].p.house)]='\0';
    //calculating spacing between each column
    len1=(75-strlen(s[i].p.house));
    len2=(30-strlen(s[i].name));
    /*if(s[i].roll<10)
      val=2;
    else
      val=1;
    for(j=0;j<val;j++)
      strcat(s[i].space.s1," ");
    s[i].space.s1[++j]='\0';*/
    for(j=0;j<len1;j++)
      strcat(s[i].space.s2," ");
    s[i].space.s2[++j]='\0';
    for(j=0;j<len2;j++)
      strcat(s[i].space.s3," ");
    s[i].space.s3[++j]='\0';
  }
}
/******************************************
*                                         *
*       Sorting Student Database          *
*                                         *
******************************************/
void order(void)
{
  int i,j,temp;
  for(i=0;i<limit;i++){
    for(j=0;j<limit-i-1;j++){
      if(s[j].marks>s[j+1].marks){
        temp=s[j].rank;
        s[j].rank=s[j+1].rank;
        s[j+1].rank=temp;
      }
    }
  }
}
/******************************************
*                                         *
*       Displaying Student Database       *
*                                         *
******************************************/
void display(void)
{
  int i;
  printf("________________________________________________________________________________________\n");
  printf("                                   Student Database                                     \n");
  printf("________________________________________________________________________________________\n");
  printf("RollNo   Name                          Address                                                                 Rank   DOB\n");
  for(i=0;i<limit;i++)
    printf("%d      %s%s%s%s%d  %d/%d/%d\n",s[i].roll,s[i].name,s[i].space.s3,s[i].p.house,s[i].space.s2,s[i].rank,s[i].p.dob[0],s[i].p.dob[1],s[i].p.dob[2]);
}
