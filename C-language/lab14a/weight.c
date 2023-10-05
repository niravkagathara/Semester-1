#include<stdio.h>
int main(){
    int i,h[5],w[5],count=0;
    for(i=0;i<5;i++){
    printf("Enter Height: ");
    scanf("%d",&h[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
    printf("Enter Weight: ");
    scanf("%d",&w[i]);
    }
     for(i=0;i<5;i++){
        if(h[i]>170 && w[i]<50){
            count++;
        }
     }
     p1rintf("\nThere person's are_%d",count);
}