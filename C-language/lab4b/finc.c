//Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)
#include<stdio.h>
 void main()
  
{
  	float c;
  	int f;
  	
  	printf("enter temp in f\n");
  	scanf("%d",&f);
  	
  	c=(((f-32)*5)/9);
  	printf("celsius is :%f",c);
  	
}


