#include <stdio.h>
#include <string.h>

// gcc -m32 -o program local.c

const char* FLAG = "Placeholder flag - submit to the network service for the real flag.";
const char* PASS = "badpass123";

int main() {
    char buffer[15];
    printf("%s\n", "Welcome to a really dull challenge.");
    printf("%s\n", "What is the password?");
    printf("%s", "> ");

    // Read 14 characters from stdin.
    fgets(buffer, 14, stdin);

    // Strip newline characters from the end of the string.
    buffer[strcspn(buffer, "\r\n")] = 0;

    // If input matches expected password print the flag.
    if (strcmp(PASS, buffer) == 0) {
        printf("%s\n", FLAG);
    } else {
        printf("%s\n", "Nope, wrong password.");
    }
    return(0);
}