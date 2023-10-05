// Swap two numbers. (Using temporary variable and without using temporary variable)
#include <stdio.h>
void main()

{
  int a, b, c;
  printf("Enter number a:\n");
  scanf("%d", &a);
  printf("Enter numbe b:\n");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;
  printf("After swapping a=%d and b=%d", a, b);
}
