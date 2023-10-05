#include<stdio.h>
int main()
{
    int n1,n2,i=1,gcd;
    printf("enter two num ");
    scanf("%d %d",&n1,&n2);
    while (i<=n1&&n2%i==0)
    {
        /* code */
        if (n1%i==0&&n2%i==0)
        {
            /* code */
            gcd=i;
        }
        i++;

    }
    printf("gcd=%d",gcd);
    return 0;
}