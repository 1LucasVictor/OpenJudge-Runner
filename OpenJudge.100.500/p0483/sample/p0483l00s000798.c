#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char input[4];
    scanf("%s", input);
    if (input[0] == '7' || input[1] == '7' || input[2] == '7')
    {
        printf("Yes");
        return 0;
    }
    printf("No");
    return 0;
}