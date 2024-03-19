#include <stdio.h>

int get_uint() {
    int n = 0;
    int c = getchar_unlocked();
    if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
    return n;
}

void print(const unsigned char Q[8]) {
    for(int i = 0; i < 8; ++i) {
        for(int j = 0; j < 8; ++j)
            putchar_unlocked(Q[i] == j ? 'Q' : '.');
        putchar_unlocked('\n');
    }
}
void queen_eight(unsigned char Q[8], unsigned char col[8], unsigned char lrd[15], unsigned char lld[15], int cnt) {
    if(cnt == 8) {
        print(Q);
        return;
    }
    if(Q[cnt]) {
        queen_eight(Q, col, lrd, lld, cnt + 1);
        return;
    }
    for(int i = 0; i < 8; ++i) {
        if(col[i] || lrd[cnt - i + 7] || lld[cnt + i]) continue;
        Q[cnt] = i;
        col[i] = lrd[cnt - i + 7] = lld[cnt + i] = 1;
        queen_eight(Q, col, lrd, lld, cnt + 1);
        Q[cnt] = col[i] = lrd[cnt - i + 7] = lld[cnt + i] = 0;
    }
}
int main(int argc, char **argv) {
    unsigned char Q[8] = {};
    unsigned char col[8] = {};
    unsigned char lrd[15] = {};
    unsigned char lld[15] = {};

    int k = get_uint();
    for(int i = 0; i < k; ++i) {
        int r = get_uint();
        int c = get_uint();
        Q[r] = c;
        col[c] = lrd[r - c + 7] = lld[r + c] = 1;
    }
    queen_eight(Q, col, lrd, lld, 0);
    return 0;
}

