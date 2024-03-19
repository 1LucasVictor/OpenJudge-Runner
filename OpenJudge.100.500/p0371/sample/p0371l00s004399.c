#include<stdio.h>
int main(void){
    int n;
    long long int a[10001],i,m=1000000,M=-1000000,S=0;
    scanf("%d",&n);
       for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if (a[i]<=m)m=a[i];
        if (a[i]>=M)M=a[i];
        S=S+a[i];
    }
    printf("%lld %lld %lld\n",m,M,S);
    return 0;
}