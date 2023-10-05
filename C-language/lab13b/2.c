#include <stdio.h>
int main() {
   int i, j, temp1=1,temp2=0,temp3=1;
   for (i = 1; i<=5; i++) {
      for (j=1;j<=i;j++) {
         printf("%d ",temp1);
         temp1=temp2;
        temp2=temp3;
        temp3=temp1;
      }
      printf("\n");
   }
   return 0;
}
