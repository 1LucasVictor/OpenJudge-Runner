#include <stdio.h>
#include <stdbool.h>

int n, t, tra[26];
char c, con[4] = {'S', 'H', 'C', 'D'};
bool ok[5][20];


int main() {
    tra[7] = 1, tra[2] = 2, tra[3] = 3;
    scanf("%d%c", &n, &c);
    for (int i = 0; i < n; i++) {
        scanf("%c %d", &c, &t);
        ok[tra[c - 65]][t] = 1;
        // printf("%d %d = %d\n", tra['C' - 65], t, ok[tra[c - 65]][t]);
        scanf("%c", &c);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 13; j++) {
            if (!ok[i][j]) {
                printf("%c %d\n", con[i], j);
            }
        }
    }
}
