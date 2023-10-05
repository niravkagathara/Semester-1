//Check whether the entered character is upper case, lower case, digit or any special character.
#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.\n", ch);
    }
    else if(ch >= '0' && ch <='9'){
        printf("'%c' is Digit.\n",ch);
    }
    else{
        printf("'%c' is a special charcater\n",ch);
    }
    return 0;
}
