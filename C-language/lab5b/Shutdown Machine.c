#include <stdlib.h> // for system() function

int main() {
    char choice;
    
    printf("Do you want to shutdown your computer now (y/n)? ");
    scanf("%c", &choice);
    
    if (choice == 'y' || choice == 'Y') {
        #ifdef _WIN32
            system("shutdown /s /t 0"); // Windows shutdown command
        #elif __linux__
            system("shutdown -h now"); // Linux shutdown command
        #endif
    }
    
    return 0;
}
