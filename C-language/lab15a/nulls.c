#include<stdio.h>
int main()
{
    char str[100];
    int i=0,count=0;

gets(str);
for(i=0;str[i]!='\0';i++)
{
    count++;

}
printf("leanth of string is:%d",count);
}
