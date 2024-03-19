#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b) {
  return *(int*)a - *(int*)b;
}



int main(){
    int N, M, K;
    int o = 0;
    scanf("%d %d %d", &N, &M, &K);
    int a[N+1], b[M+1];
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < M; i++){
        scanf("%d", &b[i]);
    }
    qsort(a, sizeof(a)/ sizeof(int), sizeof(int), asc);
    qsort(b, sizeof(a)/ sizeof(int), sizeof(int), asc);

    for(int i =1 , u = 1, ans = 0; ans < K; o++){
        if(a[i] <= b[u]) {
            ans += a[i];
            i++;
        }
        else{
            ans += b[u];
            u++;
        }
        if(ans > K) {
            o -= 1;
        }
    }
    printf("%d\n", o);
    return 0;
}