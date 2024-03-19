#include <stdio.h>
#include <string.h>

int main(void)
{
    int count;
    int i;
    char str[20];
    scanf("%s", str);
    count = strlen(str);
    for (i = 1; i < count + 1; i++) {
        printf("%c",str[count - i]);
    }
    return 0;
}