#include<stdio.h>
#include<math.h>
void main()
{
	double r1,r2,d,a,b,c;
	printf("Enter the value of a,b,c:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
	
	d = (b*b)-(4*a*c);
	if(d>0)
	{
		printf("\n roots are real and different \n");
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("root1=%.2lf,root2=%.2lf \n",r1,r2);	
	}
	else
	if(d==0)
	{
		printf("\n roots are real and same \n");
		r1=-b/(2*a);
		printf("roots=%.2lf \n",r1);
	}
	else
	if(d<0)
	{
		double real,imaginary;
		printf("\n roots are imaginary and different \n");
		real=-b/(2*a);
		imaginary= sqrt(-d)/(2*a);
		printf("root1=real+imaginary=%.2lf + %.2lfi",real,imaginary);
		printf("/nroot2=real-imaginary=%.2lf - %.2lfi",real,imaginary);
		
	}
}
