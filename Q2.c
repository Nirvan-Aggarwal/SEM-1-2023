#include<stdio.h>
main()
{
	int a=5,b=5,c=7,r;
	printf("Logical Operators\n");
	r=(a==b)&&(c>b);
	printf("(a==b)&&(c>b) is %d\n",r);
	r=(a==b)&&(c<b);
	printf("(a==b)&&(c<b) is %d\n",r);
	r=(a==b)||(c>b);
	printf("(a==b)||(c>b) is %d\n",r);
	r=(a!=b)||(c<b);
	printf("(a!=b)||(c<b) is %d\n",r);
	r=(a!=b);
	printf("(a!=b) is %d\n",r);
}
