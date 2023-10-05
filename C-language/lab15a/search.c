#include<stdio.h>
int main()
{
	int n, i, search,count=0;
	scanf("%d", &n);
	
	int arr[n];
	for(i = 0; i < n; i++){
	printf("enter num %d :",i+1);
	scanf("%d",&arr[i]);
	}
    printf("enter the element you want to search :");
	scanf("%d",&search);
    for(i = 0; i < n; i++){
		if(arr[i]==search){
			count++;
            
		}
    }
        printf("element fount %d time in array", count);
    

}