#include <stdio.h>

int main(void) {
    int i, j, l, n, m;
    int a[1000000], b[1000000];
    int sum = 0, min, k = 0;
    scanf("%d %d %d", &n, &m, &k);

    for(i = 0; i < n; i++) {
        scanf("%d", a);
    }
    for(j = 0; j < m; j++) {
        scanf("%d", b);
    }
    l = 0;
    min = a[0];
    while(1) {
        
        if(min < a[k] && a[k] > 0) {
            min = a[k];
            a[k] = -1;
        }
        else if(min < b[k] && b[k] > 0) {
            min = b[k];
            b[k] = -1;
        }
        sum += min;
        l++;
        if(sum > k) break;
        k++;
    }
    printf("%d\n", l);
}