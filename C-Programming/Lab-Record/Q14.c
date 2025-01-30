#include<stdio.h>
main()
{
 int i, n;
 float x, sum, t;
 
 printf(" Enter the value for x(Degree) : ");
 scanf("%f",&x);
 
 printf(" Enter the value for n(Iteration) : ");
 scanf("%d",&n);
 
 x=x*3.14159/180;
 t=x;
 sum=x;
 
 
 for(i=1;i<=n;i++)
 {
 t=(t*(-1)*x*x)/(2*i*(2*i+1));
 sum=sum+t;
 }
 
 printf(" The value of Sin(%f) = %.4f",x,sum);
 
 
 for(i=1;i<=n;i++)
 {
 t=t*(-1)*x*x/(2*i*(2*i-1));
 sum=sum+t;
 }
 
 printf(" The value of Cos(%f) is : %.4f", x, sum);
}

