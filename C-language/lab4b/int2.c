//Print simple interest. (principal*roi*time period)/100
#include <stdio.h>

int main(){

    int p,r,n,i;

    printf("Enter the principal:\n");
    scanf("%d", &p);

    printf("Enter the rate: \n");
    scanf("%d", &r);

    printf("Enter the time: \n");
    scanf("%d", &n);

    i= (p*r*n)/100;
    printf("The Simple interest is %d", i);

    return 0;

}

