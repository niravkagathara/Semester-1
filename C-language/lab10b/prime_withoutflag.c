#include<stdio.h>
int main()
{
    int n,i,count;
    printf("enter num:");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        if (n%i==0)
        {
            /* code */
            count++;
        }
        i++;
    }
    if (count==2)
    {
        /* code */
        printf(" number is prime");
    }
    else{
        printf("number is not prime");
    }
    
    return 0;
}