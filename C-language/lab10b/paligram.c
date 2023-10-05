#include<stdio.h>
int main()
{
    int n,rev,rem,org;
    printf("enter num n:");
    scanf("%d",&n);

    while (n>0)
    {
        /* code */
        rem=n%10;
        rev=(rev+10)+rem;
        n=n/10;
        printf("revers num=%d",rev);
        if(rev==org)
        {
            printf("num is paligram");
        }
        else{
            printf("num is not paligram");
        }
    }
    return 0;
}