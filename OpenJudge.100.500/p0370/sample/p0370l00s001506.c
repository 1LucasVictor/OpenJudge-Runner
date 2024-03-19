#include <stdio.h>
#define N 100000

int main(void) {

    int i = 0, j = 0;
    int a, b, ans[N];
    char op;

    for (i = 0; i < N; i++) {
        ans[i] = 0;
    }

    i = 0;
    while (1) {
        scanf("%d %c %d", &a, &op, &b);
        if ((a == 0) && (b == 0) && (op == '?')) {
            break;
        } else {
            switch (op) {
                case '+': ans[i] = a + b;       break;
                case '-': ans[i] = a - b;       break;
                case '*': ans[i] = a*b;         break;
                case '/': ans[i] = (int)(a/b);  break;
            }
        }
        i++;
    }
    j = i;

    for (i = 0; i < j; i++) {
        printf("%d\n", ans[i]);
    }

    return 0;

}