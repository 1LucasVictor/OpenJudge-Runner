#include <stdio.h>

long pow(long n, long m){
    long ret = 1;
    for(long i=0;i<m;i++){
        ret *= n;
    }
    return ret;
}

int main(void){

    long n, m;
    scanf("%ld %ld", &n, &m);

    long s[m], c[m];
    for(long i=0;i<m;i++){
        scanf("%ld %ld", &s[i], &c[i]);
    }

    long min, max;
    min = pow(10, n-1);
    max = pow(10, n)-1;
    long dig[n];
    for(long i=min;i<=max;i++){
        for(long j=0;j<n;j++){
            dig[j] = (i/pow(10, n-1-j))%10;
        }
        long cnt = 0;
        for(long j=0;j<m;j++){
            if(dig[s[j]-1] == c[j]){
                cnt++;
            }
        }
        if(cnt == m){
            printf("%ld\n", i);
            return 0;
        }
    }
    printf("-1\n");

    return 0;
}