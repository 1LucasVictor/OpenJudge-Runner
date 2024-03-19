#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[200000], T[200000];
    scanf("%s", S);
    scanf("%s", T);

    int S_len = strlen(S);
    int cnt = 0;

    for (int i=0; i<S_len; i++){
        if (S[i] != T[i]) cnt++;
    }

    printf("%d\n", cnt);

    return 1;
}