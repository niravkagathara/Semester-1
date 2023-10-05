//Print addition of 2 numbers. (with & without scanf)
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("enter number one\n");
  scanf("%d", &a);

  printf("enter second number\n");
  scanf("%d", &b);

  c = a + b;
  printf("sum is =%d", c);
}
