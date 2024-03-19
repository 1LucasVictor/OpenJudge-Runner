#include <stdio.h>

int main(void)
{
        int d, n, a;

        scanf("%d%d", &d, &n);

        if (d == 0){
                a = n;
                if (n == 100) a = a + 1;
        }

        else if (d == 1){
                a = 100 * n;
                if (n == 100) a = a + 1;
        }

        else{
                a = 10000 * n;
                if (n == 100) a = a + 1;
        }


        printf("%d\n", a);

        return 0;
}
