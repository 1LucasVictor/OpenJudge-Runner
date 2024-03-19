#include <stdio.h>

int main()
{
    int k, h, m, s;

    scanf("%d", &k);

    printf("%d:%d:%d\n",k/3600, k%3600/60, k%3600%60);

    return 0;

}
