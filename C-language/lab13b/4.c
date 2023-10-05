#include<stdio.h>
int main(){
    int i,j,k;
    char j1='A';
    for(i=1;i<=5;i++){
         for(k=5;k>=i;k--){
            printf(" ");
        }
        if(i%2==0){
                for(j=1;j<=i;j++){
                    printf("%c ",j1);
                    j1++;
                }
        }
        else{
            for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        }
        printf("\n");
    }
    return 0;
}