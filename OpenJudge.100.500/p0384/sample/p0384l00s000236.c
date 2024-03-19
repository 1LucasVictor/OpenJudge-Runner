#include <stdio.h>

int main(void) {
    char text[1200];
    fgets(text, 1200, stdin);
    int i = 0;
    while(text[i] != '\0') {
        if(0x41 <= text[i] && text[i] <= 0x5a) {
            printf("%c",text[i] + 32);
        }
        else if(0x61 <= text[i] && text[i] <= 0x7a) {
            printf("%c", text[i] - 32);
        }
        else printf("%c", text[i]);
        i++;
    }

    return 0;
}