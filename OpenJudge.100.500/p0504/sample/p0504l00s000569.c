#include <stdio.h>
#include <stdlib.h>

struct test {
    int H, A;
    int ans;
} td[] =
    {
        {
            10, 4,
            3,
        },
        {
            1, 10000,
            1,
        },
        {
            10000, 1,
            10000
        },
    };

void
solver(int h, int a)
{
    if (h%a==0)
        printf("%d\n", h/a);
    else
    {
        printf("%d\n", h/a+1);
    }
}

int
main(int argc, char *argv[])
{
    int H, A;
#if 0
    int tt;
    for(tt=0;tt<sizeof(td)/sizeof(struct test); tt++) {
        solver(td[tt].H, td[tt].A);
        printf("%d\n",td[tt].ans);
    }
#endif
#if 1
    scanf("%d%d", &H, &A);
    solver(H, A);
#endif
    return 0;
}