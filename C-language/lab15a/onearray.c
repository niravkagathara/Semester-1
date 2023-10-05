//Copy all elements of one array to another.
#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	int arr1[n], arr2[n];
	for(i = 0; i < n; i++){
	printf("enter array1 %d :",i+1);
	scanf("%d",&arr1[i]);
	}
	
	for(i=0; i < n; i++){
		arr2[i]=arr1[i];
	}
	for(i=0; i < n; i++){
		printf("array 2 values are %d : %d\n",i+1, arr2[i]);
	}
}
