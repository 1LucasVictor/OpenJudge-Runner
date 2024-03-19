#include <stdio.h>

// positive only
int get_int() {
    int n = 0;
    int c = getchar_unlocked();
    if(c < 48 || 57 < c) return -1;
    while(47 < c && c < 58) {
        n = 10 * n + (c & 0xf);
        c = getchar_unlocked();
    }
    return n;
}
int get_str(char *str) {
    int c = getchar_unlocked();
    if(c == -1) return -1;
    while(c > 32) {
        *str++ = (char)c;
        c = getchar_unlocked();
    }
    *str = 0;
    return 0;
}
// single hash btw
int hash_key(char *str) {
    int key = 0;
    while(*str) {
        key <<= 2;
        key |= *str++;
    }
    return key;
}
char dic[357913941];
int main(int argc, char **argv) {
    int n = get_int();
    char c[16];
    for(int i = 0; i < n; ++i) {
        get_str(c);
        if(*c == 'i') {
            get_str(c);
            dic[hash_key(c)] = 1;
        } else {
            get_str(c);
            if(dic[hash_key(c)]) puts("yes");
            else puts("no");
        }
    }
    return 0;
}

