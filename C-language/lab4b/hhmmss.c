//Convert seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000 seconds = 02:46:40)]

#include <stdio.h>

int main() {
    int seconds, hours, minutes, S;
    
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    
    hours = seconds / 3600;
    S = seconds % 3600;
    minutes = S / 60;
    S = S % 60;
    
    printf("The time in HH:MM:SS format is: %02d:%02d:%02d\n", hours, minutes, S);
    
    return 0;
}