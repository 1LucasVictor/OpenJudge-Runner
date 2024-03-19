#include <stdio.h>

int main(){
    int D,N,ans=1,i;
    scanf("%d %d", &D,&N);
    for(i=0;i<D;i++){
        ans *= 100;
    }
    ans *= N;
    if(N==100) ans += ans/N;
    printf("%d", ans);
    return 0;
}