#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0;
    int c = 0;
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        c = a + b;
        if (c == 0)
        {
            printf("1");
            break;
        }

        int i = 0;
        for (i=1; i<c; i++)
        {
            c /= 10;
            if (c ==0)
                break;
        }

        printf("%d", i);
    }


    return 0;
}

