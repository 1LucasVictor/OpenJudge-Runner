#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int k, a, b;
    scanf("%d %d %d", &k, &a, &b);
    bool ok = 0;
    for (int i = a; i <= b; i++)
        if (i % k == 0) ok = 1;
    if (ok) printf("OK\n");
    else printf("NG\n");
}