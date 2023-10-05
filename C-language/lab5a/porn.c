// Check whether given number is positive or negative.
#include <stdio.h>

void main()
{

  int a;
  printf("Enter a number:\n ");
  scanf("%d", &a);

  if (a > 0)
  {
    printf("number is positive.");
  }
  else if (a < 0)
  {
    printf("number is nagetive.");
  }
  else
  {
    printf("number is 0.");
  }
}
