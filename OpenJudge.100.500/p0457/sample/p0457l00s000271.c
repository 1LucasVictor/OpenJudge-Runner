#include<stdio.h>
int next_small(long int a[],long int n,long int b[],long int m,long int index) {
    long int aindex=index;
    long int bindex=index;
    while(aindex<n&&bindex<m) {
        if (a[aindex]<b[bindex]) return 1;
        if (a[aindex]>b[bindex]) return 0;
        aindex++;
        bindex++;
    }
}
int main() {
    long int n,m,k;
    scanf("%ld %ld %ld",&n,&m,&k);
    long int a[200000],b[200000];
    for (long int i=0;i<n;i++) scanf("%ld",&a[i]);
    for (long int i=0;i<m;i++) scanf("%ld",&b[i]);
    long int result=0;
    long int t_sum=0;
    long int aindex=0;
    long int bindex=0;
    while(t_sum<k&&(aindex<n||bindex<m)) {
        if ((a[aindex]<b[bindex]&&aindex<n)||bindex>=m) {
            t_sum+=a[aindex];
            aindex++;
            if(t_sum<=k) result++;
        } else if ((a[aindex]>b[bindex]||bindex<m)||aindex>=n) {
            t_sum+=b[bindex];
            bindex++;
            if(t_sum<=k) result++;
        } else if (a[aindex]==b[bindex]) {
          	if(next_small(a,n,b,m,aindex)) {
                t_sum+=a[aindex];
                aindex++;
                if(t_sum<=k) result++;
            } else {
                t_sum+=b[bindex];
                aindex++;
                if(t_sum<=k) result++;
            }
        } else {
            break;
        }
    }
    printf("%ld\n",result);
    return 0;
}