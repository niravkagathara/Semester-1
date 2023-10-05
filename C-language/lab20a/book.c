#include <stdio.h>

struct book
{
    char b_name[30];
    char a_name[30];
    char p_name[30];
    float price;
};
void main()
{
    int i = 0;
    struct book b[3];

    for (i = 0; i < 3; i++)
    {
        printf("\n-###-###-###-");
        printf("\nBook's is : ");
        scanf("%s", &b[i].b_name);
        printf("\nBook's Author's is : ");
        scanf("%s", &b[1].a_name);
        printf("\nBook's Publication's is : ");
        scanf("%s", &b[i].p_name);
        printf("\nBook's Price is : \n");
        scanf("%f", &b[i].price);
        printf("\n-###-###-###-");
        printf("\nBook's is : %s", b[i].b_name);
        printf("\nBook's Author's is : %s", b[i].a_name);
        printf("\nBook's Publication's is : %s", b[i].p_name);
        printf("\nBook's Price is : %f\n", b[i].price);
}
}
