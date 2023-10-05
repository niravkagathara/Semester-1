#include <stdio.h>
int maximum(int x, int y)
{
		return ((x + y + abs(x - y)) / 2);
}
int minimum(int x, int y)
{
		return ((x + y - abs(x - y)) / 2);
}
void main()
{
	int x ,y;
printf("Maximum: %d\n", maximum(x, y));

	printf("Minimum: %d\n", minimum(x, y));
}

