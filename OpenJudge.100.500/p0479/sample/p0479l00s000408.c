#include <stdio.h>
#define number 200000

int main() {
    int n, i;
    int a[number];
    int b[number];

    scanf("%d", &n);

    for(i=2; i<=n; i++) {
        scanf("%d", &a[i]);        
    }
    for(i=2; i<=n; i++){
        b[a[i]]  = b[a[i]] + 1;
    }
    for(i=1; i<=n; i++){
        printf("%d\n", b[i]);
    }

    return 0;
}