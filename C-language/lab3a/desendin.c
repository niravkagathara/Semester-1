// Accept three numbers from user and print them in ascending and descending order
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter numbers...\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a >= b) && (a >= c))
    {
        if (b >= c)
        {
            printf("%d %d %d", a, b, c);
            printf("%d %d %d", c, b, a);
        }
        else
        {
            printf("%d %d %d", a, c, b);
            printf("%d %d %d", b, c, a);
        }
    }
    else if ((b >= a) && (b >= c))
    {
        if (a >= c)
        {
            printf("%d %d %d", b, a, c);
            printf("%d %d %d", c, a, b);
        }
        else
        {
            printf("%d %d %d", b, c, a);
            printf("%d %d %d", a, c, b);
        }
    }
    else if ((c >= a) && (c >= b))
    {
        if (a >= b)
        {
            printf("%d %d %d", c, a, b);
            printf("%d %d %d", b, a, c);
        }
        else
        {
            printf("%d %d %d", c, b, a);
            printf("%d %d %d", a, b, c);
        }
    }
}
