#include<stdio.h>
void main()
{
 char str1[100],str2[100];
 int i;
 printf("Enter string str1\n");
 gets(str1);
 for(i=0;str1[i]!='\0';i++)
 {

 str2[i] = str1[i];
 }
 
 printf("Copied String(str2) is %s",str2);
}

