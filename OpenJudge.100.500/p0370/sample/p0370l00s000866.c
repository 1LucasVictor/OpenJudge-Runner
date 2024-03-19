#include <stdio.h>
#include <string.h>
int main() {
    int a, b, r;
    char op;
    while(1) {
        scanf("%d %s %d", &a, &op, &b);
        if(op == 63) break;
        if(op == 43) r = a + b;
        if(op == 45) r = a - b;
        if(op == 42) r = a * b;
        if(op == 47) r = a / b;
        printf("%d", r);
        printf("\n");
    }
    return 0;
}