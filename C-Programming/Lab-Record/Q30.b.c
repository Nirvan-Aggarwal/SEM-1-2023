#include<stdio.h>
void func1(int n);
int main( )
{
 int n;
 printf("Enter how many lines u want to print ? \n");
 scanf("%d",&n);
 printf("\n------------ Pyramid of numbers ----------- \n\n");
 func1(n);
 printf("\n");
 return 0;
}

void func1(int n)
{
 int i;
 if(n==0)
 return;
 else
 {
 func1(n-1);
 for(i=1; i<= n; i++)
 printf("%d ",i);
 printf("\n");
 }
}


