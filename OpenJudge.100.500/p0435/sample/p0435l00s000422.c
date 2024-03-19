#include <stdio.h>
int main(){
    long i,n,d,x,y;
    int ans=0;
    scanf("%lld %lld",&n,&d);
    for(i=0; i<n; i++){
        scanf("%lld %lld",&x,&y);
        if(x*x+y*y<=d*d)ans++;
    }
    printf("%d\n",ans);
    return 0;
}
