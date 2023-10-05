//Print day name of week using switch.
#include<stdio.h>

int main()
{
  int n;

  printf("enter a number (1.for monday ,2.for tuesday and so on): ");
  scanf("%d",&n);

  switch(n)
{
  case 1:
   printf("Sunday");
    break;

    case 2:
   printf("monday");
    break;

    case 3:
   printf("tuesday");
    break;

    case 4:
   printf("wednesday");
    break;

    case 5:
   printf("thursday");
    break;

    case 6:
   printf("friday");
    break;

    case 7:
   printf("saturday");
    break;

    defult:
    printf("enter valid number\n");
}
}
