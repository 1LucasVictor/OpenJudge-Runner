#include <stdio.h>
int main(void)
{
    int N, a, b, c = 0;
    scanf("%d", &N);
    for (int a = 9; a > 0; a--)
    {
        b = N / a;
        if (b < 10&&N%a==0)
            c = 1;
    }
    if (c)
        printf("Yes");
    else
        printf("No");

    return 0;
}
