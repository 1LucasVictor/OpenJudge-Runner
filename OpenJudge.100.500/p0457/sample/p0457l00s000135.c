#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,m;
    long long k;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%lld",&k);
    long long a[n],b[m];
    for (int i=0; i<n; i++) scanf("%lld",&a[i]);
    for (int i=0; i<m; i++) scanf("%lld",&b[i]);
    int rs = 0;
    int i = 0;
    while (k > 0 && (i < n || i < m)){
        if (i < n) k -= a[i];
        if (k <= 0) {
            printf("%d\n",rs);
            return 0;
        }
        ++rs;
        if (i < m) k -= b[i];
        if (k <= 0) {
            printf("%d\n",rs);
            return 0;
        }
        ++rs;
        ++i;
    }
    printf("%d\n",rs);
    return 0;
}