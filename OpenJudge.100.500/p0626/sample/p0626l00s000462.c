#include <stdio.h>

int main(void)
{
        int d, n, a;

        scanf("%d%d", &d, &n);

        if (d == 0){
                a = n;
                if (n == 100) a = 101;
        }

        else if (d == 1){
                a = 100 * n;
                if (n == 100) a = 101 * n;
        }

        else{
                a = 10000 * n;
                if (n == 100) a = 10001 * n;
        }


        printf("%d\n", a);

        return 0;
}
