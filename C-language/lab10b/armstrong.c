#include<stdio.h>
int main()
{
    int n,i,c,sum=0,t;
    printf("enter num n");
    scanf("%d",&n);

    t=n;
    while (n>0)
    {
        /* code */
        i=n%10;
        c=i*i*i;
        sum=sum+c;
        n=n/10;
    }
    if (sum==t)
    {
        /* code */
        printf("num is armstrong");
    }
    else{
        printf("num is not armstrong");
    }

    return 0;
        
}