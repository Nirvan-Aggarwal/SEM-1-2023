#include<stdio.h>
main()
{
	int a=3,b=8,r;
	printf("Bitwise Operator\n");
	r=a&b;
	printf("(Bitwise AND) a & b is %d\n",r);
	r=a|b;
	printf("(Bitwise OR) a | b is %d\n",r);
    r=a^b;
	printf("(Bitwise XOR) a ^ b is %d\n",r);	
	r= ~a;
	printf("(Bitwise Compliment) ~a is %d\n",r);	
}
