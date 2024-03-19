#include <stdio.h>
#include <string.h>
int main() {
    char S[100001];
    int cnt0 = 0, cnt1 = 0;
    if (scanf("%s", S) == -1) return -1;
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == '0') cnt0++;
        if (S[i] == '1') cnt1++;
    }
    printf("%d\n", ((cnt0 > cnt1) ? cnt1 : cnt0) * 2);
    return 0;
}