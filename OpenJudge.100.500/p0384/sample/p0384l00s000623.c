#include <stdio.h>
#include <string.h>

int main() {
    char string[1200];
    fgets(string, 1200, stdin);
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] += -32;
        } else {
            if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32;
            }
        }
    }
    printf("%s", string);
}
