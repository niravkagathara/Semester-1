// pattern-8
#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" %d",k);
		}
		printf("\n");
	}
}