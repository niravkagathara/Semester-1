#include<stdio.h>
int main()
{
    int n1,n2,max,lmc;
    printf("enter two num ");
    scanf("%d %d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    while (1)
    {
        /* code */
        if (max%n1==0&&max%n2==0)
        {
            /* code */
            lmc=max;
            break;
        }
        max++;

    }
    printf("lmc=%d",lmc);
    return 0;
}