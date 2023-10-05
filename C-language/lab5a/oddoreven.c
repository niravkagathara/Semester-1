// Check whether the given number is odd or even
#include <stdio.h>
int main()
{
    int a;
    printf("Enter value of a: \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}
