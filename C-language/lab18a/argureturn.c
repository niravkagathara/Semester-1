#include <stdio.h>
int div(int x, int y)
{   float c;
    c = x/y;
    return c;
}

int main()
{
    int a, b;
    float  c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    c=div(a,b);
    printf("Division is: %f", c);
}
