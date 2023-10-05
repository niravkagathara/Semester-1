#include<stdio.h>
void main(){
    int n,co=0,ce=0,i=0;
    printf("Enter how many num. you wanna enter :_ ");
    scanf("%d",&n);
    int num[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter num. for %d index :_ ",i+1);
        scanf("%d",&num[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (num[i]%2==0)
        {
            co++;
        }
        else ce++;
    }
    printf("\nthere are %d - nums are Divezabal by 2",ce);
    printf("\nthere are %d - nums are not Divezabal by 2",co);

}