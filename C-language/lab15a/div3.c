//Count number of elements divisible by 3 in array.
#include<stdio.h>

int main(){
	int n, countpl=0, countmi=0, i;
	scanf("%d",&n);
	
	int num[n];
	for(i = 0; i < n; i++){
	printf("enter num %d :",i+1);
	scanf("%d",&num[i]);
	}
	
	for(i = 0; i < n; i++){
		if(num[i]%3==0){
			countpl++;
		}
		else{
			countmi++;
		}
	}
	printf("total are %d", countpl);
}
