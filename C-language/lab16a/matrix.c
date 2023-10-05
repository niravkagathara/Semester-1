#include<stdio.h>
void main()
{
	int i,j;
	int arr[3][3];
	printf("enter the elements of matrix :-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
			
		}
	}
	printf("matrix form:- \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			printf("  %d",arr[i][j]);
		}
		printf("\n");
		
		
	}
}
