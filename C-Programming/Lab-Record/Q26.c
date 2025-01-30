#include<stdio.h>
#include<string.h>
int main()
{
 char name[30];
 printf("Enter name: ");
 gets(name);
 printf("Name: ");

 puts(name); 
 printf("The length of the string you entered is %d\n",strlen(name));
 printf("The Name in upper case is %s\n",strupr(name));
 printf("The name in lower case is %s\n",strlwr(name));
 
 char str1[30];
 printf( "Enter second string : ");
 gets(str1);
 strcat(name, str1);
 printf("Concatenated string: %s\n", name);
 
 return 0;
}

