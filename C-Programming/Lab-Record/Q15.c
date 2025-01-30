#include<stdio.h>
void convert(int, int);
int main()
{
 int num;
 printf("Enter a positive decimal number : ");
 scanf("%d", &num);
 
 printf("\nBinary number == ");
 convert(num, 2);

 printf("\nOctal number == ");
 convert(num, 8);

 printf("\nHexadecimal number == ");
 convert(num, 16);

 return 0;
}
void convert (int num, int base)
{ int rem = num%base;
 if(num==0)
 return ;
 
 if(rem < 10)
 printf("%d", rem);
 else
 printf("%c", rem-10+'A' ); 
convert(num/base, base);
}
