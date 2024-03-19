#include <stdio.h>
int main(int argc, char **argv)
{
    int val;
    int h,m,s;

    scanf("%d", &val);

    s = val % 60;
    m = (val / 60) % 60;
    h = (val / 3600) % 24;

    printf("%d:%d:%d\n", h, m, s);
    return 0;

}