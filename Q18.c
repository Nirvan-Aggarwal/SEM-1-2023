#include <stdio.h>
int fibonacci(int num)
{
 if (num == 0)
 {
 return 0; 
 }
 else 
 if (num == 1)
 {
 return 1; 
 }
 else
 {
 return fibonacci(num - 1) + fibonacci(num - 2); 
 } }
 int main()
{
 int v,i; 
 printf("Enter the number of elements to be in the series : ");
 scanf("%d", &v); 
 for (i = 0; i < v; i++)
 {
 printf("%d, ", fibonacci(i)); 
 }
 return 0;
} 


