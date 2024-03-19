#include<stdio.h>
int main(){
    int n,i,a[10005];
    long long int b = 10000000,t= (-10000000),m=0;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(b>a[i]){
            b=a[i];
        }
        if(t<a[i]){
            t=a[i];
        }
        m+=a[i];
    }

    printf("%lld %lld %lld\n",b,t,m);

    return 0;
}