/*Enter basic salary of an employee and calculate Gross salary according to given conditions:
-
-
-
Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic*/
#include <stdio.h>
void main()

{
	int a, hra, da, gross;

	printf("enter a basic salary__:");
	scanf("%d", &a);
	if (a >= 30000)
	{
		hra = 0.3 * a;
		da = 0.95 * a;
		gross = a + hra + da;
	}
	else if (a >= 20000)
	{
		hra = 0.25 * a;
		da = 0.9 * a;
		gross = a + hra + da;
	}
	else if (a >= 10000)
	{
		hra = 0.2 * a;
		da = 0.8 * a;
		gross = a + hra + da;
	}

	else
	{
		hra == 0;
		da == 0;
		gross = a + hra + da;
		printf("%d=a", gross);
	}

	printf("hra=%d\nda=%d\ngross=%d\n",hra,da,gross);
}
