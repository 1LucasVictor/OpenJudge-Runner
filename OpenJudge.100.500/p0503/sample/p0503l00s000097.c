#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int cmpint(const void* n1, const void* n2)
{
    if (*(int*)n1 > * (int*)n2) {
        return 1;//降順なら-1
    }
    else if (*(int*)n1 < *(int*)n2) {
        return -1;//降順なら1
    }
    else {
        return 0;
    }
}

int main() {
    int a[200001] = {};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmpint);
    for (int i = 0; i < n; i++) {
        if (a[i] == a[i + 1]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
