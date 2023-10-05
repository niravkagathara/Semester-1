#include<stdio.h>
void main()
{
	int i,n,a[10],c2=0,c1=0;
	printf("How many numbers user want : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]%2==0)
    		c1++;
    	else
    		c2++;
    }printf("\neven number = %d",c1);
    printf("\nodd number = %d",c2);
}