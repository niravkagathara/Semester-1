//WAP to find out sum of first and last digit of a given number.
#include <stdio.h>
void main(){
   int n,sum;
   printf("enter any number:");
   scanf("%d",&n);
   sum=n%10;
   while(n>9){
      n=n/10;
   }
   sum=sum+n;
   printf("sum of first and last digit is:%d",sum);
}