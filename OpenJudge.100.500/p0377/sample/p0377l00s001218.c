#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int n, m ;
    static int a[4][13];
    char c, s[5]={'S','H', 'C', 'D' ,'\0'};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%*c%c%d", &c, &m);
        for (int j = 0; j <= 3; j++) {
            if (s[j] == c)a[j][m-1] = 1;
        }
    }
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 13; j++) {
            if (a[i - 1][j - 1] == 0)printf("%c %d\n", s[i - 1], j);
        }
    }
    return 0;
}
