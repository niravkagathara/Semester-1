// Swap two numbers. (Using temporary variable and without using temporary variable)
#include <stdio.h>

void main()
{

    int a, b;
    printf("enter first no.:\n");
    scanf("%d", &a);
    printf("enter second no.:\n");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n after swing a=%d and b=%d", a, b);
}
