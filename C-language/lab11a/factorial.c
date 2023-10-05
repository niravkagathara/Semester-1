#include<stdio.h>
void main()
{
	int n=1,fact=1,temp;
	printf("Enter no. ");
	scanf("%d",&temp);
	for(n=temp;n>0;n--)
	{
		fact=fact*n;
	}
	printf("%d = %d",temp,fact);
}