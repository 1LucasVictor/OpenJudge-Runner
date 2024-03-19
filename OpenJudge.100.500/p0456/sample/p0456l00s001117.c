#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int cnt = 0;
    // char S[10005], T[10005];
    char *S = malloc(10005);
    char *T = malloc(10005);
    scanf("%s", S);
    scanf("%s", T);
    while (S[i])
    {
        if (S[i] != T[i])
        {
            cnt++;
        }
        i++;
        }
    printf("%d", cnt);
    return 0;
}