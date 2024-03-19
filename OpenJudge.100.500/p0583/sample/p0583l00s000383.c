#include <stdio.h>
#include <stdlib.h>


#define MAX_N (200)

static char S[MAX_N];

static int
isNoDoubleRocks(char S[], int l, int r);

int main (void)
{
    int N, A, B, C, D;

    // scan N A B C D, S
    scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
    for ( int i = 0; i < N; i++ ) {
        scanf("%c", &S[i]);
    }

    // pertun 1 : A < C < B < D
    int ret = 1;
    if (C < B) {
        ret &= isNoDoubleRocks(S, A, C-1);
        ret &= isNoDoubleRocks(S, B, D-1);
    } else if (C < D) {
        ret &= isNoDoubleRocks(S, B, D-1);
        if (ret == 1) { S[D-1] = '#'; }
        ret &= isNoDoubleRocks(S, A, C-1);
    } else if (C > D) {
        ret = isNoDoubleRocks(S, C, D-1); // B ok
        if (ret == 0) { ; }
        else {
            for (int i = B-1; i <= D-1; i++) {
                if (S[i] == '.') {
                    S[i] = '#';
                    ret = isNoDoubleRocks(S, A-1, C-1); // A ok
                    if (ret == 1) { break; }
                    S[i] = '.';
                }
            }
        }
    } else {
        ret = 0;
    }

    if (ret == 1) { printf("Yes\n"); }
    else { printf("No\n"); }

    return 0;
}

static int
isNoDoubleRocks(char S[], int l, int r)
{
    char tmp = S[l];
    for (int i = l+1; i <= r; i++) {
        if (tmp == '#' && S[i] == '#') {
            return 0;
        }
        tmp = S[i];
    }
    return 1;
}
