#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    int a[n];
    int *p;
    for (i = 0; i < n; i++)
    {
        printf("Enter Element: ");
        scanf("%d", &a[i]);
    }
    p=&a[0];
    for(i=0 ; i<n; i++)
    {
    printf("%d\n", *p++);
    }
}
