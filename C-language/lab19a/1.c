//Find factorial of a number using function and recursive function.
#include <stdio.h>
int mul(int n)
{
	if(n>0)
		return n*mul(n-1);
	else
		return 1;
}
void main()
{
	int n,s;
	scanf("%d",&n);
	s=mul(n);
	printf("\nFactorial is %d",s);
}
