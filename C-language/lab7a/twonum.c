//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter number c (1.for addi,2.for sub,3.for multi,4.for divi): \n");
	scanf("%d",&c);
	printf("enter number a\n");
	scanf("%d",&a);
	printf("enter number b\n");
	scanf("%d",&b);

	switch(c)
	{
		case 1:
		printf("two num addican=%d",a+b );
		break;

		case 2:
		printf("two num sub=%d",a-b );
		break;

        case 3:
		printf("two num multi=%d",a*b );
		break;

		case 4:
		printf("two num divi=%d",a/b );
		break;

		defult:
		printf("enter valid no\n");
	}
   
}
