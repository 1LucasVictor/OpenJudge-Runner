#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k, a, b;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);

    int tmp = k;
    while (tmp <= b)
    {
        if (a <= tmp)
        {
            printf("OK\n");
            return 0;
        }
        tmp += k;
    }
    printf("NG\n");
}
