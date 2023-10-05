// lab-13(B) program-3
#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter a number: ");
	scanf("%d",&i);
	for(j=i;j>=1;j--)
	{
		for(n=1;n<=i-j;n++)
		{
			printf(" ");
		}
		for(k=1;k<=j;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}