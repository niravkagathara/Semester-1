//Multiply and divide a number by 2 without using multiplication/division operator.

#include <stdio.h>

int main() {
    int num, result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    result = num << 1; // multiply by 2
    printf("%d multiplied by 2 is %d\n", num, result);
    
    result = num >> 1; // divide by 2
    printf("%d divided by 2 is %d\n", num, result);
    
    return 0;
}
