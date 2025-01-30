#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,n=0,reminder,result=0,i;
	printf("enter the number");
	scanf("%d",&a);
	b=a;
	while (a != 0)
	{
		a/=10;
		n++;
	}
	a=b;
	while (a!=0)
	{
		reminder=a%10;
		result += pow(reminder,n) ;
		a/=10;
	}
	if(b==result)
	{
		printf("the numer is aemstrong");
	}
	else
	{
		printf("the number is not armstrong");
	}
}
