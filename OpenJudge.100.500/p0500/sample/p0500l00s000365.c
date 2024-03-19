#include <stdio.h>

int main(void) {
    int answer[3] = {0, 0, 0};
    int n, m;
    int s, c;

    while (!scanf("%d %d", &n, &m))
        ;

    for (; 0 < m; m--) {
        while (!scanf("%d %d", &s, &c))
            ;
        
        if (s == 1 && c == 0) {
            answer[0] = -1;
            break;
        }
        if (answer[s - 1] != 0 && answer[s - 1] != c) {
            answer[0] = -1;
            break;
        }
        answer[s - 1] = c;
    }
    if (answer[0] == -1) { printf("%d", -1); return 0; }
    if (answer[0] == 0) {
        answer[0] = 1;
    }

    for (m = 0; m < n; m++) printf("%d", answer[m]);
    return 0;
}