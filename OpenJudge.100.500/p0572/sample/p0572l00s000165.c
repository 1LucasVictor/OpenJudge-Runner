
#include <stdio.h>
long long MIN(long long a,long long b){
    return a<b?a:b;
}
int main()
{   long long l,r;
    scanf("%lld%lld",&l,&r);
    long long min=2019;
    if(r-l>=2019){
        printf("0");
    }else{
        for(long long i=l;i<r;i++){
            for(long long  j=i+1;j<=r;j++){
                min=MIN(((i%2019)*(j%2019))%2019,min);
            }
        }
    }
    printf("%lld",min);
    return 0;
}
