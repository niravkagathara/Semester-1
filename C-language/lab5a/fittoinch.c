//Print given feet into inches. (inches = feet*12)
#include<stdio.h>

int main()
{
		int feet,inches;
		
		printf("Enter the value of feet:\n ");
		scanf("%d",&feet);
		
		inches=feet*12;
		
		printf("Total inches will be: %d\n",inches);
		return 0;
}

