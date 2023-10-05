//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days]
#include <stdio.h>

int main() {
    int days, years, weeks, remaining_days;
    
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = (days % 365) % 7;
    
    printf("%d days = %d years, %d weeks, and %d days\n", days, years, weeks, remaining_days);
    
    return 0;
}
