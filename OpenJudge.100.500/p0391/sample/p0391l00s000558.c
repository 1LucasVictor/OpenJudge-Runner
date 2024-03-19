#include <stdio.h>
#include <string.h>

void repl(char *s, int l, int r, char *tt) {
    for (int i = l; i <= r; i++)
        *(s + i) = *(tt + i - l);
}

void revse(char *s, int l, int r) {
    char tt[1005];
    for (int i = l; i <= r; i++)
        tt[i] = *(s + i);
    for (int i = l; i <= r; i++)
        *(s + i) = tt[r - i + l];
}

void prnt(char *s, int l, int r) {
    for (int i = l; i <= r; i++)
        putchar(*(s + i));
    putchar('\n');
}

int main() {
    char rp[] = "replace", rv[] = "reverse", pt[] = "print";
    char s[1005], t1[15], t4[1005]; scanf("%s", s);
    int n, t2, t3; scanf("%d", &n);
    while (n--) {
        scanf("%s %d %d", t1, &t2, &t3);
        if (strcmp(t1, rp) == 0) {
            scanf("%s", t4);
            repl(s, t2, t3, t4);
        }
        if (strcmp(t1, rv) == 0) revse(s, t2, t3);
        if (strcmp(t1, pt) == 0) prnt(s, t2, t3);
    }
}
