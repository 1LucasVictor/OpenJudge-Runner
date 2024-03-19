#include <stdio.h>
#include <stdlib.h>

int main(void){
    long long n,m;
    long long k;
    scanf("%lld",&n);
    scanf("%lld",&m);
    scanf("%lld",&k);
    long long a[n],b[m];
    for (int i=0; i<n; i++) scanf("%lld",&a[i]);
    for (int i=0; i<m; i++) scanf("%lld",&b[i]);
    int rs = 0;
    int i = 0;
    int state;
    while (k > 0){
        state = 0;
        if (i >= n) state = 1;
        if (i >= m) state = 2;
        switch (state)
        {
        case 1:{
            k -= b[i];
            if (k < 0){
                printf("%d\n",rs);
                return 0;
            }
            ++rs;
            break;
        }
        case 2:{
            k -= a[i];
            if (k < 0){
                printf("%d\n",rs);
                return 0;
            }
            ++rs;
            break;
        }
        default:
            if (a[i] < b[i]){
                k -= a[i];
                if (k < 0){
                    printf("%d\n",rs);
                    return 0;
                }
                ++rs;
                k -= b[i];
                if (k < 0){
                    printf("%d\n",rs);
                    return 0;
                }
                ++rs;
            }
            else{
                k -= b[i];
                if (k < 0){
                    printf("%d\n",rs);
                    return 0;
                }
                ++rs;
                k -= a[i];
                if (k < 0){
                    printf("%d\n",rs);
                    return 0;
                }
                ++rs;
            }
            break;
        }
        ++i;
    }
    printf("%d\n",rs);
    return 0;
}