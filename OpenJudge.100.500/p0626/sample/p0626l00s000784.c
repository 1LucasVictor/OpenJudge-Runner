#include <stdio.h>

int main(void)
{
        int d, n, a;

        scanf("%d%d", &d, &n);

        if (d == 0){
                a = n;
                if (a == 100) return 1;
        }

        else if (d == 1) a = 100 * n;

        else a = 10000 * n;

        printf("%d\n", a);

        return 0;
}
