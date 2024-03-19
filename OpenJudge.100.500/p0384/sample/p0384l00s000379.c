#include <stdio.h>
#include <stdlib.h>
#define LENGTH 1200

int is_lowercase(char c) {
    if ('a' <= c && c <= 'z') {
        return 1;
    }
    return 0;
}

int is_uppercase(char c) {
    if ('A' <= c && c <= 'Z') {
        return 1;
    }
    return 0;
}

int main(void)
{
    char *str;
    char *s_ptr;

    str = (char *)malloc(sizeof(char) * LENGTH);

    fgets(str, LENGTH, stdin);

    s_ptr = str;
    while (*s_ptr != '\0') {    
        if (is_lowercase(*s_ptr)) {
            *s_ptr = *s_ptr - 'a' + 'A';
        } else if (is_uppercase(*s_ptr)) {
            *s_ptr = *s_ptr - 'A' + 'a';
        }
        s_ptr++;
    }

    printf("%s", str);

    return 0;
}
