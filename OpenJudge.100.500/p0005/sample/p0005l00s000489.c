#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char str[20];
    char rstr[20];
    int i;
    int len;

    scanf("%s", str);

    len = strlen(str) - 1;

    i = 0;
    while (str[i] != '\0') {
        rstr[i] = str[len - i];
        i++;
    }
    rstr[i] = '\0';

    printf("%s\n", rstr);

    return (0);
}