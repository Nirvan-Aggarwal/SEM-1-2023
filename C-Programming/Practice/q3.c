#include<stdio.h>
int fac(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
	{
	int result;
	result=n*fac(n-1);
    }
}
void main()
{
	int a;
	printf("Enter a non negative integer ");
	scanf("%d",&a);
	printf("The factorial of %d is %d",a,fac(a));	
}
