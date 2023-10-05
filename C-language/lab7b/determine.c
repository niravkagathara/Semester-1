#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number among the first two
    if (num1 > num2) {
        largest = num1;
    } else {
        largest = num2;
    }

    // Multiply the largest number by the third number using a switch statement
    switch (largest) {
        case 0:
            printf("The largest number is 0. The product is 0.\n");
            break;
        default:
            printf("The largest number is %d. The product is %d.\n", largest, largest * num3);
            break;
    }

    return 0;
}
