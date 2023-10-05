//5. Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
int main(){
    int n=1,co=0,ce=0,i;
    while(n<=10){
    printf("Number_");
    scanf("%d",&i);
    if(i%2==0){
        ce=ce+1;
    }
    else{
        co=co+1;
    }
    n++;
    
    }
    printf("Count Of Odd=%d\n",co);
    printf("Count Of Even=%d\n",ce);
}

