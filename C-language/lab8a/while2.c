//Print 1 to 10 then modify program Print 1 to n using while and do while loop.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d",i);
        i++;
    }
    
} 
