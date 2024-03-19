#include <stdio.h>
#include <string.h>


int main(void)
{
    int i;
    int length;
    char str[21];
    scanf("%s", str);
    length = strlen(str) - 1;

    for (i = length; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return (0);

}
