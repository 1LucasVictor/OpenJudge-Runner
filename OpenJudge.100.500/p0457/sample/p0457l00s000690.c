//BISMILLAH
#include <stdio.h>

int main(void){
    int k, a, b, sum = 0;
    int n, m, count=0, big, j, l, i;
    int x[200010], y[200010];

    scanf("%d %d %d", &n, &m, &k);

    for(i=0; i<n; i++){
        scanf("%d", &a);
        x[i] = a;
    }

    for(i=0; i<m; i++){
        scanf("%d", &b);
        y[i] = b;
    }

    if(n>m)
        big = n;
    else if(m>n)
        big = m;
    else
        big = n;

    for(i=1, j=0, l=0; i<=big; i++){
        if(sum>=k)
            break;
        else{
            if(j<n){
                if(sum+x[j]<=k){
                    sum += x[j];
                    j++;
                    count++;
                }
            }
            if(l<m){
                if(sum+y[l]<=k){
                    sum += y[l];
                    l++;
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
