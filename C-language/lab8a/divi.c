#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Numbers divisible by 2 between %d and %d are: ", start, end);
    
    // Adjust the starting number if it is not divisible by 2
    if (start % 2 != 0) {
        start++;
    }

    // Print the numbers
    for (int i = start; i <= end; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
