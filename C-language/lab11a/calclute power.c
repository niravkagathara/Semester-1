#include <stdio.h>

int main()
{
    int base, exponent;
    int i,sum=1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i=1; i<=exponent; i++)
    {
        sum=sum* base;
    }

    printf("%d ^ %d = %d", base, exponent, sum);

 return 0;
}
