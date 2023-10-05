#include<stdio.h>
void main(){
    int array[50],i,n,max=0,min=0,sum=0;
    double avg;
    printf("How many no. you want enter[less than 50]: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Enter no_: ");
    scanf("%d",&array[i]);
    sum+=array[i];
    }
    avg=sum/(double)n;
    printf("\nTotal= %d \n",sum);
    printf("Average= %lf \n",avg);
    max=array[0];
    min=array[0];
    for(i=0;i<n;i++){
        if(max<array[i]){
            max=array[i];
        }
        if(min>array[i]){
            min=array[i];
        }
    }
    printf("Max no is_%d \n",max);
    printf("Min no is_%d \n",min);
}