#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers: \n");
    scanf("%d\n %d\n %d", &num1, &num2, &num3);
    
    int largest, second_largest;
    
    if (num1 > num2 && num1 > num3) {
        largest = num1;
        if (num2 > num3) {
            second_largest = num2;
        }
        else {
            second_largest = num3;
        }
    }
    else if (num2 > num1 && num2 > num3) {
        largest = num2;
        if (num1 > num3) {
            second_largest = num1;
        }
        else {
            second_largest = num3;
        }
    }
    else {
        largest = num3;
        if (num1 > num2) {
            second_largest = num1;
        }
        else {
            second_largest = num2;
        }
    }
    
    printf("The second largest number is %d\n", second_largest);
    
    return 0;
}
