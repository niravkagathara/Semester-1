// Input electricity unit charge and calculate the total electricity bill according to the given condition
#include <stdio.h>
int main()
{
	int unit;

	double total = 0.0, tax = 0.0, totaltax = 0.0;

	printf("enter a unit:\n");
	scanf("%d", &unit);

	if (unit <= 50)
	{
		total = unit * 0.50;
	}
	else if (unit <= 150)
	{
		total = 50 * 0.50 + (unit - 50) * 0.75;
	}
	else if (unit <= 250)
	{
		total = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
	}
	else if (unit > 250)
	{
		total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
	}

	tax = total * 0.20;
	totaltax = total + tax;
	printf("%lf total is:\n", total);
	printf("%lf tax is:\n", tax);
	printf("%lf total tax is:\n", totaltax);

	return 0;
}
