#include<stdio.h>

int main(){
    long int n, m, k;
    scanf("%ld%ld%ld", &n, &m, &k);
    long int a[200000], b[200000], i, j;
    for(i = 0; i < n; i++){
        scanf("%ld", &a[i+1]);
    }
    for(int i = 0; i < m; i++){
        scanf("%ld", &b[i+1]);
    }
    a[0] = b[0] = 0;
    for(i = 0; i < n; i++){
        a[i+1] += a[i];
    }
    for(i = 0; i < m; i++){
        b[i+1] += b[i];
    }
    long int ans = 0;
    for(i = 0; i <= n; i++){
        for(j = m; j >= 0; j--){
            if(a[i] + b[j] <= k){
                if(i + j > ans){
                    ans = i + j;
                }
                break;
            }

        }
    }
    printf("%ld\n", ans);
    return 0;
}    
