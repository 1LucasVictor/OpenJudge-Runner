#include <stdio.h>

int main(void)
{
    int n, m;
    long k, tmp=0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%ld", &k);

    long a[200001], b[200001];
    a[0]=0; b[0]=0;

    for(int i=1; i<=n; i++){
        scanf("%ld", &a[i]);
        a[i] += tmp;
        tmp = a[i];
    }
    tmp = 0;
    for(int i=1; i<=m; i++){
        scanf("%ld", &b[i]);
        b[i] += tmp;
        tmp = b[i];
    }
    long max=0;
    int ans=0;
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            if(a[i]+b[j] <= k){
                ans = i+j;
            } 
        }
    }
    printf("%d", ans);
}