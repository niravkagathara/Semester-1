// Display day name for the given numbe
#include <stdio.h>

int main()

{
    int n;

    printf("Enter a number from 1 to 7 to get 1=monday 2=tuesday etc.\n");

    scanf("%d", &n);

    if (n <= 7)

    {

        if (n == 1)

            printf("MONDAY");

        else if (n == 2)

            printf("TUESDAY");

        else if (n == 3)

            printf("WEDNESDAY");

        else if (n == 4)

            printf("THURSDAY");

        else if (n == 5)

            printf("FRIDAY");

        else if (n == 6)

            printf("SATURDAY");

        else if (n == 7)

            printf("SUNDAY");
    }

    else

        printf("no days");

    return 0;
}
