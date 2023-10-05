#include<stdio.h>
int  main()
{
    int a, b, c;
    printf("Entre value of a: ");
    scanf("%d", &a);
    printf("Entre value of b: ");
    scanf("%d", &b);
    int *p, *q;
    p=&a;
    q=&b;

    c=*p;
    *p=*q;
    *q=c;

    printf("swapped values are :%d %d", *p,*q);

    return 0;
}