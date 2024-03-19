#include <stdio.h>

int get_uint() {
    int n = 0;
    int c = getchar_unlocked();
    if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
    return n;
}
void put_uint(int n) {
    if(!n) {
        putchar_unlocked('0');
        return;
    }
    char buf[11];
    int i = 0;
    while(n) buf[i++] = (char)(n % 10 + '0'), n /= 10;
    while(i--)putchar_unlocked(buf[i]);
}

int main(int argc, char **argv) {
    int n = get_uint();
    int G[100][100] = {};
    for(int i = 0; i < n; ++i) {
        int u = get_uint() - 1;
        int k = get_uint();
        for(int j = 0; j < k; ++j) G[u][get_uint() - 1] = 1;
    }
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j) {
            put_uint(G[i][j]);
            putchar_unlocked(j == n - 1 ? '\n' : ' ');
        }
    return 0;
}

