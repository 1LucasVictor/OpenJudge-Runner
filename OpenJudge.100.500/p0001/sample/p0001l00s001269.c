#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b;
    char str[128];

    while (scanf("%d %d", &a, &b) == 2){
        sprintf(str, "%d", a + b);
        printf("%d\n", strlen(str));
    }

    return (0);
}