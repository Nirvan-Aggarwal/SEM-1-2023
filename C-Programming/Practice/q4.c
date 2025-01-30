#include<stdio.h>
void main()
{
	int i,a
	;
	printf("Enter the size of array");
	scanf("%d",&i);
	int array[i];
	printf("Enter %d values of the array\n",i);
	for(a=0 ; a<i ;a++)
	{ 
		scanf("%d",&array[a]);
	}
	int min,max;
	min=array[0];
	max=array[0];
	for(a=1;a<i;a++)
	{
		if(min>array[a])
		{
			min=array[a];
		}
		if(max<array[a])
		{
			max=array[a];
		}
	}
	printf("\n minimum=%d and maximum=%d",min,max);	
}
