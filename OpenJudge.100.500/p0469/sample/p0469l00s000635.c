#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>

#define MAX(a, b) (a>b?a:b)
#define MIN(a, b) (a<b?a:b)
#define MOD 1000000007

long long int abso(long long int n) {
    if(n < 0)
        return n*(-1);
    return n;
}

int compare(const void* a, const void* b) {
    return *(int*)a-*(int*)b;
}

void testCase() {
    int n, i, k, a, b;
    if(scanf("%d%d%d", &k, &a, &b)) {
        for(i=a;i<=b;i++) {
            if(i%k == 0) {
                printf("OK\n");
                return;
            }
        }
        printf("NG\n");
    }
}

int main() {
    int t=1;
    // scanf("%d", &t);
    while(t--) {
        testCase();
    }
    return 0;
}