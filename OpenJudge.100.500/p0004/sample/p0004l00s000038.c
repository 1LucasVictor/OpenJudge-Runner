#include <stdio.h>

int main(void){
    long a,b,c,d,tmp,ans;
    while(scanf("%ld%ld",&a,&b)!=EOF){
        c=a;
        d=b;
        while(1){
            tmp=a%b;
            if(tmp==0){
                ans=b;
                break;
            }
            a=b;
            b=tmp;
        }
        printf("%ld %ld\n",ans,c*d/ans);
    }
    return 0;
}