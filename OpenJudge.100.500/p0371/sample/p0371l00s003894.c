#include<stdio.h>
int main(void){
    long long t,n,sum,max,min,a[10000];
    scanf("%lld",&n);
    for(t=0;t<n;t++){
        scanf("%lld",&a[t]);
    }
    sum=0;
    max=a[0];
    min=a[0];
    for(t=0;t<n;t++){
        sum+=a[t];
        if(max<a[t]){
            max=a[t];
        }else if(min>a[t]){
            min=a[t];
        }
            
    }
    printf("%lld %lld %lld\n",min,max,sum);
    return 0;
}
