//Check for equality of two numbers without using arithmetic or comparison operator
#include<stdio.h>

int main()
{
    int a,b;
    printf("\nEnter two numberes:\n");
    scanf("%d %d",&a,&b);

    ((a^b)?printf("Not Equal\n"):printf("Equal\n"));

}
