//Print numbers between two given numbers which is divisible by 2.
#include<stdio.h>
void main(){
    int n1,n2;
    printf("Write Two no.");
    scanf("%d %d",&n1,&n2);
    while((n1+1)<=n2){
        if(n1%2==0){
       printf("%d \n",n1);}
     n1++;
     }
}
