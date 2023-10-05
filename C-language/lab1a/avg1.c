//Calculate average of three numbers.
#include<stdio.h>
void main()
{
    float avg;
    int a,b,c;
    
    printf("enter number one \n");
    scanf("%d",&a);
   
    printf("enter secand number \n");
    scanf("%d",&b);  
    
    printf("enter third number \n");
    scanf("%d",&c);  
    
    avg=((a+b+c)/3);
    printf("avrage is =%f",avg);
}
