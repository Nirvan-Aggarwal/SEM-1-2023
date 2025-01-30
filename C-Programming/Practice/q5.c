#include <stdio.h>
void main()
{
	int m,n,a,b;
	printf("Enter the rows and cols of matrix you want to add");
	scanf("%d %d",&m,&
	n);
	printf("enter %d values for first matrix\n",m*n);
	int mat1[m][n];
	for(a=0;a<m;a++)
	{
	 for(b=0;b<n;b++)
	 {
	 	scanf("%d",&mat1[a][b]);
	 }
	 printf("\n");
    }
    printf("enter %d values for second matrix\n",m*n);
    int mat2[m][n];
	for(a=0;a<m;a++)
	{
	 for(b=0;b<n;b++)
	 {
	 	scanf("%d",&mat2[a][b]);
	 }
	 printf("\n");
    }
    printf("the addition of the matrix are\n");
    int fm[m][n];
    for(a=0;a<m;a++)
	{
	 for(b=0;b<n;b++)
	 {
	 	printf("%d\t",mat1[a][b]+mat2[a][b]);
	 }
	 printf("\n");
    }
}
