// Find out largest number from given three numbers.
#include <stdio.h>

void main()

{
	int a, b, c;
	printf("enter a,b,c,:");
	scanf("%d,%d,%d", &a, &b, &c);

	if (a > b && a > c)
	{
		printf("largest no is a");
	}
	else if (b > a && b > c)
	{
		printf("largest no is c");
	}

	else
	{
		printf("largest no is c");
	}
}
