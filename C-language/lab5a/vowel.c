//Check whether given character is vowel or consonant. (Using single if only)
#include<stdio.h>

int main()
{
    char c;
    int lowercase_vowel,uppercase_vowel;

    printf("enter an alphabet\n");
    scanf("%c",&c);

    lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    
    if (lowercase_vowel||uppercase_vowel)
    {
        printf("%c is a vowel.",c);
    }
    else
    {
        printf("%C is a consenant.",c);
    }
    
}
