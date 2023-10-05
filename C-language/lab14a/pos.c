#include<stdio.h>
void main()
{
	int i,n,a[10],cn=0,cp=0;
	printf("How many num you want : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]>0)
    		cp++;
    	else
    		cn++;
    }
    printf("\npositive number = %d",cp);
    printf("\nnegative number = %d",cn);
}
