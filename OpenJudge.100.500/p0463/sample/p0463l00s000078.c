#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char input[4];
    int len;
    char temp;
    int one;
    scanf("%s", input);
    len = strlen(input);
    temp = input[len - 1];
    one = atoi(&temp);
    if (one == 0 || one == 1 || one == 6 || one == 8)
    {
        printf("pon");
        return 0;
    }
    else if (one == 3)
    {
        printf("bon");
        return 0;
    }
    printf("hon");
    return 0;
}