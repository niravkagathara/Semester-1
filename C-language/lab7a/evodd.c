//heck whether number is even number or odd number using conditional operator
#include <stdio.h>

int main()
{
    int num;


    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    
    printf("The number is %s", (num%2==0 ? "EVEN" : "ODD"));

    return 0;
}

