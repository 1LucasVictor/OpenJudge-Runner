#include <stdio.h>
int main()
{
    int N;

    scanf("%d", &N);

    int a;

    if (N % 2 == 0) {
        a = N / 2;
    }
    else {
        a = (N + 1) / 2;
    }

    printf("%d",a);

    return 0;
}

