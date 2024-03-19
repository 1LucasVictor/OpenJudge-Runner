#include <stdio.h>
#define N 100000

int main(void) {

    int i, n;
    int number[N];
    char ch;

    for (i = 0; i < N; i++) {
        number[i] = 0;
    }

    i = 0;
    while (1) {
        while (1) {
            scanf("%c", &ch);
            if (ch == '\n') {
                break;
            } else {
                number[i] += ch - 48;
            }
        }
        if (number[i] == 0) {
            break;
        } else {
            i++;
        }
    }
    n = i;

    for (i = 0; i < n; i++) {
        printf("%d\n", number[i]);
    }

    return 0;

}