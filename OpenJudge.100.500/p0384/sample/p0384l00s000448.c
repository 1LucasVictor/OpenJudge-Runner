/*
 * ID: ITP1_8_A
 * Problem: Toggling the case of strings
 */

#include <stdio.h>

int main(void)
{
    char s[1200];

    fgets(s, sizeof(s) - 1, stdin);

    int i;
    for (i = 0; i < 1200 && s[i] != '\0'; i++)
        if (islower(s[i]))
            printf("%c", toupper(s[i]));
        else if (isupper(s[i]))
            printf("%c", tolower(s[i]));
        else
            printf("%c", s[i]);

    return 0;
}


