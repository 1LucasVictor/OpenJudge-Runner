#include <stdio.h>
int main(void){
    long long a,b,i,j,ans=2019;
    scanf("%lld%lld",&a,&b);
    if(b-a>=2019) ans=0;
    else{
        for(i=a;i<b;i++){
            for(j=i+1;j<=b;j++){
                if(ans>i*j%2019) ans=a*j%2019;
            }
        }
    }
    printf("%lld",ans);
    return 0;
}
