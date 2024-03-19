#include <stdio.h>
#include <string.h>

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

// prime number
#define M 49762109
char dic[M][13];

// base: 5
int str_key(char *str){
    int key = 0;
    for(int i = 1; *str; i*=5) {
        switch(*str++) {
            case 'A': key += 1 * i;
                      break;
            case 'C': key += 2 * i;
                      break;
            case 'G': key += 3 * i;                                                               break;
            case 'T': key += 4 * i;
                      break;
            defaut:   break;
        }
    }
    return key;
}
#define hash_key(k) ((k) % M)
#define hash_alt(k) (1 + ((k) % (M - 1)))
#define hash(k, i) ((hash_key(k) + (i) * hash_alt(k)) % M)
int dic_find(char *str){
    int key = str_key(str);
    size_t len = strlen(str);
    int hash;
    for(int i = 0;; ++i) {
        hash = hash(key, i);
        // found
        if(strlen(dic[hash]) == len && strncmp(dic[hash], str, len) == 0) return 1;
        // not exist
        if(strlen(dic[hash]) == 0) return 0;
        // else: found other key
    }
}
void dic_insert(char *str){
    int key = str_key(str);
    size_t len = strlen(str);
    int hash;
    for(int i = 0;; ++i) {
        hash = hash(key, i);
        // already exist
        if(strlen(dic[hash]) == len && strncmp(dic[hash], str, len) == 0) return;
        // insert
        if(strlen(dic[hash]) == 0){
            strcpy(dic[hash], str);
            return;
        }
        // else: hash used by other key
    }
}

int main(int argc, char **argv) {
    int n = get_int();
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

