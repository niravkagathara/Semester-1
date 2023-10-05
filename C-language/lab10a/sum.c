#include<stdio.h>
int main()
{
    int i=0,n;
    float sum,avg,num;
    sum=0;
    printf("how many number you want  to find  sum and avg:");
    scanf("%d",&n);
    printf("enter the number");
    do{
        scanf("%f",&num);
        sum=sum+num;
        i++;
    }
    while (i<n);
    {
        
        avg=sum/n;
        printf("sum=%.2f",sum);
        printf("avg=%.2f",avg);
    }
    
}