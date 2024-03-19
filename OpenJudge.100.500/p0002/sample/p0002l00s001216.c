#include <stdio.h>

int main(){
    int i = 0, j, s, q, r, N;
    scanf("%d", &N);
    int a[N], b[N], c[N];
    while(1){
        if(i == N){
            break;
        }
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
        i++;
    }
    for(j = 0; j < N; j++){
        s = a[j]^2;
        q = b[j]^2;
        r = c[j]^2;
        if(s == q + r || q == s + r || r == s + q){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}