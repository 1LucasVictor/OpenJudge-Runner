#include <stdio.h>
int main(void){
    long long l,r,i,j,ans=10000000000;
    scanf("%lld%lld",&l,&r);
    if(r-l>=2019) ans = 0;
    else{
        for(i=l;i<r;i++){
            for(j=i+1;j<=r;j++){
                if(ans>i*j%2019) ans=i*j%2019;
            }
        }
    }
    printf("%lld",ans);
    return 0;
}