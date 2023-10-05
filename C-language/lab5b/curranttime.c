// #include <stdio.h>
// #include <time.h>

// int main() {
//     time_t current_time;
//     struct tm * time_info;
//     char time_string[50];
    
//     // Get current time
//     time(&current_time);
    
//     // Convert to local time
//     time_info = localtime(&current_time);
    
//     // Format and print the time
//     strftime(time_string, sizeof(time_string), "%Y-%m-%d %H:%M:%S", time_info);
//     printf("Current date and time: %s\n", time_string);
    
//     return 0;
// }

 #include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    currentTime = time(NULL);
    char* dateString = ctime(&currentTime);
    printf("Current date and time: %s", dateString);
    return 0;
}
