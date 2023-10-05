//Find out largest number from given two numbers.
#include <stdio.h>  
   
void main() 
{  
    int a, b;  
    printf("enter no a and b=\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("number a is large");          
    } 
    else if (b > a)
    { 
        printf("number b is lard\n");  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
    
}


