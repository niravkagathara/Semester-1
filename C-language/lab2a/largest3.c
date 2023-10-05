//Find out largest number from given three numbers
#include<stdio.h>
 
void main()

{
int a,b,c;
	printf("enter a,b,c three num:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
	if(a>c)
		{printf("largest no is a");}
    else
		{printf("largest no is c");}
	}
	
	else
	{
		if(b>c)
		{printf("largest no in b");}
		else
		{printf("largest no is c");
		}
		
	}
	
}
