#include <stdio.h>
int main(void){
    long long a,b,i,j,ans=1000000000000;
    scanf("%lld%lld",&a,&b);
    for(i=a;i<b;i++){
        for(j=a+1;j<=b;j++){
            if(ans>i*j%2019) ans=a*j%2019;
            if(ans==0) break;
        }
    }
    printf("%lld",ans);
    return 0;
}
