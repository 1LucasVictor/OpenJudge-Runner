#include <stdio.h>

int main () {

    int i, j, a, b, x;
    char op;

    for (; ; ) {
        scanf("%d %c %d", &a, &op, &b);

        if (op == '+') {
            x = a + b;
        } else if (op == '-') {
            x = a - b;
        } else if (op == '*') {
            x = a * b;
        } else if (op == '/') {
            x = a / b;
        } else if (op == '?') {
            break;
        }

        printf("%d\n", x);

    }

    return 0;

}
