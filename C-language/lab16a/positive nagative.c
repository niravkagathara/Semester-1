#include<stdio.h>
int main()
{
	int a[3][3],i,j,c1=0,c2=0,c3=0;
    printf("\nenter elements:- \n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>0)
			c1++;
			
			else
			if(a[i][j]<0)
			c2++;
			
			else
			c3++;
		}
	}
	printf("\n Positive = %d  \n Negative = %d \n Zero = %d",c1,c2,c3);
	return 0;
}
