#include <stdio.h>
#include <string.h>

void branch(int a, char *op, int b) {

    if (strcmp(op, "+") == 0) {
        printf("%d\n", a + b);
    } else if (strcmp(op, "-") == 0) {
        printf("%d\n", a - b);
    } else if (strcmp(op, "*") == 0) {
        printf("%d\n", a * b);
    } else {
        printf("%d\n", a / b);
    }
}

void process() {
    int a, b;
    char op[256];

    do {
        scanf("%d %c %d", &a, op, &b);
	if (strcmp(op, "?") == 0) break;
	branch(a, op, b);
    } while (strcmp(op, "?") != 0);

}

int main(void) {
    process();
    return 0;
}
