// Check whether character is an alphabet or not using conditional operator.
#include <stdio.h>
int main()

{
    char c;
    printf("enter a charecter__");
    scanf("%c", &c);

    (c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z') ? printf("alphabet"): printf("not alpa");
    return 0;
}
