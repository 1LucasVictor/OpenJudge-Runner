#include <stdio.h>

int main(void)
{
    char S[5];
    int ans;

    scanf("%s", S);
    ans = (S[0] - '0') + (S[1] - '0') + (S[2] - '0');
    printf("%d\n", ans);

    return 0;
}