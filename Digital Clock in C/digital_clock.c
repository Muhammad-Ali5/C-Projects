#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For sleep() function

int main() {
    int h, m, s;

    // Input time in HH MM SS format
    printf("\n\n\t\t--SET TIME :) [HH MM SS format]\n");
    scanf("%d %d %d", &h, &m, &s);

    // Validate input
    if (h >= 24 || m >= 60 || s >= 60) {
        printf("----'Error: Invalid time format'----\n");
        return 1;  // Exit with error code
    }

    while (1) {
        // Display time in HH:MM:SS format
        printf("\n\n\t\t---'-' Clock '-'---\n");
        printf("\n\t\t%02d:%02d:%02d", h, m, s);

        // Sleep for 1 second
        sleep(1);

        // Increment time
        s++;
        if (s >= 60) {
            s = 0;
            m++;
        }
        if (m >= 60) {
            m = 0;
            h++;
        }
        if (h >= 24) {
            h = 0;
        }

        // Clear the screen (works on most systems)
//        system("clear");  // For Linux/Unix systems
         system("cls");  // Uncomment this line for Windows
    }

    return 0;
}
