#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    int strrev,strlwr,strupr;
    char s1[100],s2[100];
    printf("Enter a string.\n");
    scanf("%s",s1);
    //strlen(),strrev(),strcat(),strcpy(),strupr(),strlwr(),strcmp()
    printf("Enter the operation you wish to perform on the string:\n1. String Length\n2. String Reverse\n3. String Concatenation\n4. String Copy\n5. String Upper Case\n6. String Lower Case\n7. String Comparison\n");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
        {
            b=strlen(s1);
            printf("String Length = %d",b);
            break;
        }
    case 2:
        {
            printf("String Reverse = %s",strev(s1));
            break;
        }
    case 3:
        {
            printf("Enter the target string.\n");
            scanf("%s",s2);
            strcat(s2,s1);
            printf("Result - %s",s2);
            break;
        }
    case 4:
        {
            strcpy(s2,s1);
            printf("Copied String - %s",s2);
            break;
        }
    case 5:
        {
            printf("The Upper Case of String is %s",stupr(s1));
            break;
        }
    case 6:
        {
            printf("The Lower Case of String is %s",stlwr(s1));
            break;
        }
    case 7:
        {
            printf("Enter the string you wish to compare with the previous string.\n");
            scanf("%s",s2);
            a=strcmp(s1,s2);
            printf("String Compare %d",a);
            break;
        }

    default:
        {
            printf("You have not entered a valid option.");
        }
    }

}