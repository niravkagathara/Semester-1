#include<stdio.h>
void sum()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    c=a+b;
    printf("Addition is: %d", c);
}

void main()
{
    sum();
}
