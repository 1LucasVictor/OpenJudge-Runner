#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int past=n+1,now=n;
    while(now<past){
        past=now;
        now=abs(now-k);
    }
    printf("%d\n",past);
}