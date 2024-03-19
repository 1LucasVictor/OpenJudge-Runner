#include<stdio.h>
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
        } else if ((a[aindex]>=b[bindex]||bindex<m)||aindex>=n) {
            t_sum+=b[bindex];
            bindex++;
            if(t_sum<=k) result++;
        } else {
            break;
        }
    }
    printf("%ld\n",result);
    return 0;
}