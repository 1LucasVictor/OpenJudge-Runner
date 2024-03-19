#include <string.h>
#include <stdio.h>
#define swap(type, a, b) {type tmp = a; a = b; b = tmp;}
#define rep(i, n) for (i = 0; i < n; i++)
#define repi(k, o) for (k; k < o; k++)

int main(void) {
    char string[201] = {'\0'};
    int m, n, i, j, k, len;

    while (1) {
        scanf("%s", string);
        if (string[0] == 45) break;
        len = strlen(string);
        scanf("%d", &m);

        rep(i, m) {
            scanf("%d", &n);
            rep(j, n) {
                k = 1;
                repi(k, len) {
                    swap(char, string[k], string[k-1]);
                }
            }
        }
        printf("%s\n", string);
    }
    return 0;
}
