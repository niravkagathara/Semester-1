#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        if(i==1){
        for(j=5;j>=i;j--){
            printf("* ");
        }
        }
        else if(i==5){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        }
        else{
                for(j=1;j==1;j++){
                    printf("* ");
                }
                for(k=2;k<=4;k++){
                    printf("  ");
                }
                for(j=5;j==5;j--){
                    printf("* ");
                }
                
        }
        printf("\n");
    }
    return 0;
}