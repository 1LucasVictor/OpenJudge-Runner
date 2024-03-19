#include <stdio.h>

int     main(void)
{
    char    bus[4];
    int     i;
    i = scanf("%s", bus);
    if (bus[0] == bus[1] && bus[1] == bus[2])
        printf("No");
    else
        printf("Yes");
    return (0);
}