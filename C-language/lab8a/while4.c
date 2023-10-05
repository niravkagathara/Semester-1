//Print 1 to 10 then modify program Print 1 to n using while and do while loop.
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter n");
    scanf("\n%d",&n);
    do
    {
        printf("\n%d",i);
        i++;
    }
    while(i<=n);
}
