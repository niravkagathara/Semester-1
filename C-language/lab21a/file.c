//Create, open and close a file.
#include<stdio.h>
void main()
{
	FILE *f1;
	f1=fopen("abc.txt","r");
	if(f1==NULL)
	{
		printf("\nFile not found");
	}
	else{
		printf("\nFile found\n\n");
		char ch;
		ch=getc(f1);
		while(ch!=EOF){
			printf("\n%c",ch);
			ch=getc(f1);
		}
	}
	fclose(f1);

}
