#include<stdio.h>
void main()
{
    int n,i,a[5];
    for(i=1;i<=5;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        printf("\nYour number is : %d ",a[i]);
    }
}