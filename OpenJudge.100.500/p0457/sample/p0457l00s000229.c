#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(void) {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    
    int a[400100];
    for(int i = 0; i < n+m; i++) {
        scanf("%d", &a[i]);
    }
    
    qsort(a, n+m, sizeof(int), compare_int);
    
    int count = 0;
    int sum = 0;
    for(int i = 0; i < n+m; i++) {
        sum += a[i];
        if(sum > k) break;
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}
