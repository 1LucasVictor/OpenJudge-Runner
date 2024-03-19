// AtCoder154 C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <memory.h>
#include <malloc.h>
#include <stdlib.h>

int main() {

    int n, i, m;
    int* a; // 動的メモリの先頭アドレス用のポインタ
    int* buka;
    int sum = 0;
    assert(scanf("%d", &n) ==1);

    // malloc:確保したメモリの先頭アドレスを返す
    a = (int*)malloc(sizeof(int) * (n-1));
    buka = (int*)calloc(n,sizeof(int));
    for (i = 0; i < (n-1); i++) {
        assert(scanf("%d", &a[i]) == 1);
        buka[a[i] - 1]++;
    }
    
    for (i = 0; i < n; i++) {
        printf("%d\n", buka[i]);
    }
    free(a);
    free(buka);

    return 0;
}