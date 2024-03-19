#include <stdio.h>

int main()
{
    char N[10];
    scanf("%s", N);

    int ans = 0;
    for (int i = 0; i < 3; ++i) {
        if (N[i] == '1') ++ans;
    }

    printf("%d\n", ans);
    return 0;
}
