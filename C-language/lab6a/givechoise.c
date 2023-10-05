//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.
#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("enter number 1= multi,2=div,3=subs,4=addi");
	scanf("%d",&n);
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
if(n==1)
{
	c=a*b;
}
else if(n==2)
{
	c=a/b;
}
else if(n==3)
{
	c=a-b;
}
else
{
	c=a+b;
}
printf("%d",c);
}
