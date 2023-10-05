//Check whether the given number is odd or even using bitwise operator.
#include<stdio.h>

int main()
{
    int a;

    printf("Enter a number \n:");
    scanf("%d,&a");

 if (a%1==1)
 {
   printf("odd");
}
 else
{
	printf("even");
}
    return 0;
}
