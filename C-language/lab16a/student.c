#include<stdio.h>
int main()
{
	char name[20][100];
	int roll[20];
	float marks[20];
	int no,i,j;
	printf("how many records do you want to store:-\n");
	scanf("%d",&no);
	for(i=0;i<=no-1;i++)
	{
		printf("enter student %d info\n",i+1);
		printf("Name:-");
		scanf("%s",&name[i]);
		printf("ROll NO:-");
		scanf("%s",&roll[i]);
		printf("Enter Marks:-");
		scanf("%s",&marks[i]);
	}
	printf("Name\tRoll\tMarks\n");
	for(j=0;j<=no-1;j++)
	{
		printf("%s\t%d\t%f\n",name[j],roll[j],marks[j]);
	}
}
