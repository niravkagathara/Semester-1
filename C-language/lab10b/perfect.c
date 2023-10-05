#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter n:");
    scanf("%d",&n);

    while(n>i)
    {
        if (n%i==0)
        {
            /* code */
            sum=sum+i;
        }
        i++;
        
    }
    if (sum==n)
    {
        /* code */
        printf("number is perfect");

    }
    else{
        printf("number is not perfect");
    }
    return 0;
    
}