#include <stdio.h>

void main(void)
{
    char c[3];
    scanf("%s",c);

    if((c[0] == '7') ||
        (c[1] == '7') ||
        (c[2] == '7') ) {
        printf("Yes");
    }else {
        printf("No");
    }
    return;
}