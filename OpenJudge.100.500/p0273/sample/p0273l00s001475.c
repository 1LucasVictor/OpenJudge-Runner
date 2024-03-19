#include <stdio.h>


// I/O
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
//


int main(int argc, char **argv) {
    int n = get_uint();
    int fib[45] = {1, 1};
    for(int i = 2; i < 45; ++i) fib[i] = fib[i - 1] + fib[i - 2];
    put_uint(fib[n]);
    putchar_unlocked('\n');
    return 0;
}

