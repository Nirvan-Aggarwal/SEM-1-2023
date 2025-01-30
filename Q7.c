#include<stdio.h>
main()
{
printf("Enter the number to split the digit\n");
 int num;
 
 scanf("%d",&num);
 
 while(num > 0) 
 {
 int mod = num % 10; 
 printf("The digits are\n");
 printf("%d\n",mod); 
 num = num / 10; 
 }
 
 }
