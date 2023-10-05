//Print multiplication table of a given number.
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter n:");
    scanf("\n%d",&n);

    while (i<=10)
    {
        /* code */
        sum=n*i;
    
    
        printf("\n%d*%d=%d",n,i,n*i);
        i++;
}
}
