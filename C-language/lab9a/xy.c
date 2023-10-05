//Calculate x y without using power function
#include<stdio.h>
int main()
{
	int i=1,x,y,ans=1;
	printf("enter x&y:");
	scanf("%d %d",&x,&y);
	while(i<=y)
	{
		ans=ans*x;
		i++;
	}
	printf("ans=%d",ans);
	return 0;
}
