#include<stdio.h>
int main()
{
    int n,i=1,count;
    printf("enter value of n:");
    scanf("%d",&n);
    while (i<=n)
    {
        /* code */
        if(n%i==0){
            count++;
        }i++;
    }
    if (count==2)
    {
     printf("num is prime:");
        /* code */
    }
    else{
        printf("num is not prime:");
    }
    return 0;
    
    
}