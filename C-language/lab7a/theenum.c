// Find out largest number from given 3 numbers using conditional operator.
#include <stdio.h>
int main()
{
	int a, b, c, sum;
	printf("enter three num__:");
	scanf("%d %d %d", &a, &b, &c);

	sum = a > b ? a * c : b * c;
	printf("your ans=%d", sum);
}
