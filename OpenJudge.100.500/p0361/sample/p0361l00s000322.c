#include <stdio.h>

int main(void)
{
    int sec;
    scanf("%d", &sec);
    printf("%d:%d:%d\n", sec / (60 * 60), (sec / 60) % 60, sec % 60);

    return (0);    
}
