//Check for equality of two numbers without using arithmetic or comparison operator
#include<stdio.h>
int checkforequality(int x,int y)
{return!(x^y);
}
int main(void)
{
	int x,y;
	printf("enter two number");
	scanf("%d %d",&x,&y);
	if(checkforequality(x,y))
	{
		printf("x=%d is eqval to y=%d \n",x,y);
	}
	else
	{
		printf("x=%d is not eqval to y=%d",x,y);
	}
	return 0;
}
