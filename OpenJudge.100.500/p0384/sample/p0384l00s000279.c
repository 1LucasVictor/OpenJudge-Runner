#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    while (1) {
        char ch;
        scanf("%c", &ch);

        if (ch == '\n') {
            printf("\n");
            break;
        } else {
            if ('a' <= ch && ch <= 'z') {
                ch += 'A' - 'a';
            } else if ('A' <= ch && ch <= 'Z') {
                ch -= 'A' - 'a';
            }
            printf("%c", ch);
        }

    }
    return 0;
}
