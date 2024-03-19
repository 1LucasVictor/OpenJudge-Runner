#include <stdio.h>

int main() {
    int a, b, ans;
    char op;

    while (1) {
        scanf("%d %c %d", &a, &op, &b);
        if (op != '?') {
            if (op == '+') {
                ans = a + b;
            }

            if (op == '-') {
                ans = a - b;
            }

            if (op == '*') {
                ans = a * b;
            }

            if (op == '/') {
                ans = a / b;
            }
            printf("%d\n", ans);
        } else {
            break;
        }
    }
    return 0;
}
