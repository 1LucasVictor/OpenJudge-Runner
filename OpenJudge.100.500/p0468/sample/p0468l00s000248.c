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

long long int nCk(int n, int k){
    long long int bunbo = 1, bunsi = 1;
    while(k>0){
        bunbo *= k;
        bunsi *= n;
        k -= 1;
        n -= 1; 
    }
    return bunsi/bunbo;
}

int main() {

    int n,i;
    int* a;  // 動的メモリの先頭アドレス用のポインタ
    char contest[4];
    scanf("%s", contest);

    if(strcmp(contest,"ABC")==0){
        printf("ARC");
    }else{
        printf("ABC");
    }
    return 0;
}