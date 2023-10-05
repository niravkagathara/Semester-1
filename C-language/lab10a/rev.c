#include <stdio.h>
void main()
{
    int n, rev;
    printf("enter value of n:");
    scanf("%d", &n);
    for (n |= 0; n > 0; n /= 10)
    {
        rev = n % 10;
        printf("%d", rev);
    }
}