#include <stdio.h>
#include <string.h>

#define STR_LENGTH 21

int main()
{
    char buf[STR_LENGTH];

    fgets(buf, STR_LENGTH, stdin);
    for (int i = 0; i < strlen(buf) - 1; i++)
    {
        printf("%c", buf[strlen(buf) - 2 - i]);
    }
    printf("\n");

    return 0;
}