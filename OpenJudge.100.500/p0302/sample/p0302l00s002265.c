#include <stdio.h>
#include <string.h>

int get_uint() {
    int n = 0;
    int c = getchar_unlocked();
    if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) {
        n = 10 * n + (c & 0xf);
        c = getchar_unlocked();
    }
    return n;
}
int get_str(char *str) {
    int c;
    while((c = getchar_unlocked()) > 32) *str++ = (char)c;
    *str = 0;
    return c;
}
#define A 0.6180339887
#define M (1 << 24)
char dic[M][13];
int str_key(char *str) {
    int key = 0;
    // base: 5
    for(int i = 1; *str; i *= 5) {
        switch(*str++) {
        case 'A': key += 1 * i;
            break;
        case 'C': key += 2 * i;
            break;
        case 'G': key += 3 * i;
            break;
        case 'T': key += 4 * i;
            break;
        default: break;
        }
    }
    return key;
}
#define mod(n) ((n)>M ? (n) & 23 : (n))
#define hash_key(k) (int)(M * (key*A - (int)(key*A)))
#define hash_alt(k) (1 + ((k) >> 1))
#define hash(k, i) (hash_key(k) + (i) * hash_alt(k))
int dic_find(char *str) {
    int key = str_key(str);
    size_t len = strlen(str);
    int hash;
    for(int i = 0;; ++i) {
        hash = mod(hash(key, i));
        if(strlen(dic[hash]) == len && strncmp(dic[hash], str, len) == 0) return 1;
        if(strlen(dic[hash]) == 0) return 0;
    }
}
void dic_insert(char *str) {
    int key = str_key(str);
    size_t len = strlen(str);
    int hash;
    for(int i = 0;; ++i) {
        hash = mod(hash(key, i));
        if(strlen(dic[hash]) == len && strncmp(dic[hash], str, len) == 0) return;
        if(strlen(dic[hash]) == 0) {
            strcpy(dic[hash], str);
            return;
        }
    }
}

int main(int argc, char **argv) {
    int n = get_uint();
    char c[13];
    for(int i = 0; i < n; ++i) {
        get_str(c);
        if(*c == 'i') {
            get_str(c);
            dic_insert(c);
        } else {
            get_str(c);
            if(dic_find(c)) puts("yes");
            else puts("no");
        }
    }
    return 0;
}

