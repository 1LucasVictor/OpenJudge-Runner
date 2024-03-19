#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, t = 0;

    scanf("%d %d %d", &a, &b, &t);

    printf("%d\n", (t/a)*b);
    return 0;
}
