#include<stdio.h>
#include<string.h>
main()
{
char str[50];
gets(str);

printf("The length of the string is %d" ,strlen(str));
printf("The uppercase of the string is: %s",strupr(str));
printf("The Lowercase of the string is :%s", strlwr(str));

char strl= "Gaurav";

char str2= "Arora";

char str3= strcmp(strl,str2); 

printf("%s",str3);
}
