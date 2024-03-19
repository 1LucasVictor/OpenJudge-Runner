#include <stdio.h>

int main(void)
{
    int peji;

    scanf("%d", &peji);

    if (peji % 2)
        printf("%d", peji / 2 + 1);
    else 
        printf("%d", peji / 2);
        
    return 0;
}