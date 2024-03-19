// AtCoder165 C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <memory.h>
#include <malloc.h>
#include <stdlib.h>

// qsortで用いる比較用関数．*a<*bならaが先になる．
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main() {

    int n,i;
    //int* a;  動的メモリの先頭アドレス用のポインタ
    int a, b;
    int k;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);
    
    if(a%k==0){
        printf("OK");
    }else if((b/k)-(a/k) >= 1){
        printf("OK");
    }else{
        printf("NG");
    }

    return 0;
}