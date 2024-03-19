#include <stdio.h>
int main(void){
    long long x,n,i,a,sum=0;
    scanf("%lld%lld",&x,&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a);
        sum+=a;
    }
    if(x<=sum) printf("Yes");
    else printf("No");
    return 0;
}