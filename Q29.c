#include<stdio.h>
struct stud
{
 int rno;
 float per;
 char name[20],add[20];
}s;
int main()
{
 FILE *fp;
 fp=fopen("C:/Users/Student/Desktop/student.txt","w");
 printf("Enter record of student:\n\n");
 printf("\nEnter student number : ");
 scanf("%d",&s.rno);

 printf("\nEnter name of student: ");
 scanf("%s",s.name);
 printf("\nEnter student address : ");
 scanf("%s",s.add);
 printf("\nEnter percentage of student : ");
 scanf("%f",&s.per);
 fprintf(fp,"%d\n%s\n%s\n%f",s.rno,s.name,s.add,s.per);
 printf("\nRecord stored in file...");
 fclose(fp);
 return 0;
}
