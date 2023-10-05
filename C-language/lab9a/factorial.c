//Find factorial of the given numbe
#include<stdio.h>
int main()
{
	 int n,fact=1;
	 printf("enter n:");
	 scanf("%d",&n);

	 while(n>0)
	 {
		fact=fact+n;
		n=n-1;
	 }
	 printf("faCtorial =%d\n",fact);
	 return 0;
}
