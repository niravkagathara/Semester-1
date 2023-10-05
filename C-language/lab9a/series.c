//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 ... n.
#include<stdio.h>
int main()
{
	int n,sum=0,i=1;
	printf("enter n:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		
		if(i%2==0)
		{
			
			sum=sum-i;
			
		}
		else{
			
			sum=sum+i;
		}
		i++;
	}
	printf("\n=%d",sum);
	return 0;
	
}

