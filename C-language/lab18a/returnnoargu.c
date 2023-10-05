#include <stdio.h>
int mul()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    c = a * b;
    return c;
}

int main()
{
    int c;
    c = mul();
    printf("Multiplication: %d", c);
}
