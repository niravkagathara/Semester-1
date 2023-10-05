//Find factors of the given number.
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter n:");
    scanf("%d",&n);

    while (i<=n)
    {
        if (n%i==0)
        {
            printf("%d\n",i);
            /* code */
        }
        i++;
        /* code */
    }
    return 0;
    
}