#include <stdio.h>

int
main(void)
{
        int a, b, c, d, e, k;

        scanf("%d\n", &a);
        scanf("%d\n", &b);
        scanf("%d\n", &c);
        scanf("%d\n", &d);
        scanf("%d\n", &e);
        scanf("%d", &k);

        if ((e - a) > k)
                printf(":(");
        else
                printf("Yay!");
}
