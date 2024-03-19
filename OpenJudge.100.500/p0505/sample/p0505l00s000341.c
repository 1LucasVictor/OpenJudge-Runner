#include <stdio.h>

int main() {
    int a, h, n;
    int ans;
    scanf("%d%d", &h, &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a);
        h -= a;
    }
    if (h <= 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
