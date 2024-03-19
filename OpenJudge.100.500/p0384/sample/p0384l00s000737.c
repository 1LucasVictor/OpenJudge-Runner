#include <stdio.h>

int main()
{
    char c;

    fscanf(stdin, "%c", &c);

    while (c != '\n') {
        if (c >= 65 && c <= 90) {
            fprintf(stdout, "%c", c + 32);
        } else if (c >= 97 && c <= 122) {
            fprintf(stdout, "%c", c - 32);
        } else {
            fprintf(stdout, "%c", c);
        }
        fscanf(stdin, "%c", &c);
    }
    putchar('\n');

    return 0;
}