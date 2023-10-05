#include<stdio.h>
int main()
{
    int i=0,n,top;
    printf("enter num:");
    scanf("%d",&n);
    while (n>10)
    {
        top=n%10;
        n=n/10;
        printf("\n%d",top);
        /* code */
    }
    
}