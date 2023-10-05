#include<stdio.h>
int main()
{
    int a;
    printf("Enter value: ");
    scanf("%d", &a);
    int *p;
    p=&a;

    printf("Your value is: %d\n", *p);
    printf("Value address is: %d", p);

    return 0;
}
