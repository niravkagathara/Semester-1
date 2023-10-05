#include<stdio.h>
void main()
{
	int n,i,a[100];
    printf("How many numbers user want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    for(i=n;i>=1;i--)
    {
        printf("\nYour number is : %d ",a[i]);
    }
}
