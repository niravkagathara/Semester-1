#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enter number ");
    scanf("%d",&n);
    i=2;
    while (i<n)
    {
     if (n%i==0)
     {
        /* code */
        flag=1;
        break;
     }
     i++;
        /* code */
    }
    if (flag==0)
    {
        /* code */
        printf("num is prime");
    }
    else{
        printf("num is not prime");
    }
    
    return 0;
}