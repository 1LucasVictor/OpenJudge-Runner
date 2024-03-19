#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    bool ok = 0;
    for (int i = 0; i <= x; i++) {
        if (i * 2 + (x - i) * 4 == y) ok = 1;
    }
    if (ok) printf("Yes\n");
    else printf("No\n");
}