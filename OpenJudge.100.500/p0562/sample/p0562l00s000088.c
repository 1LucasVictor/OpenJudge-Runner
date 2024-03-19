#include <stdio.h>

int main()
{
    int a, b, t=0, c=0;
    scanf("%d %d", &a, &b);
    if(b == 1)
    {
        printf("0\n");
        return 0;
    }

    while(c<=b)
    {
        c += (a-1);
        t++;
        if(c+1>=b)
            break;
    }

    printf("%d\n", t);

    return 0;
}
