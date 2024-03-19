#include <stdio.h>
#include <stdlib.h>

#ifdef TEST
struct test {
    int ans;
} td[] = {
    {},
};
#endif

void
solver(long x)
{
    long n500, n5;
    n500 = x / 500;
    x -= n500 * 500;
    n5 = x / 5;
    printf("%ld\n", n500 * 1000 + n5 * 5);
}

int
main(int argc, char *argv[])
{
#ifdef TEST
    int tt;
    for(tt = 0; tt < sizeof(td) / sizeof(struct test); tt++) {
        solver();
        printf("%d\n", td[tt].ans);
    }
#endif
    long X;
    scanf("%ld", &X);
    solver(X);
    return 0;
}