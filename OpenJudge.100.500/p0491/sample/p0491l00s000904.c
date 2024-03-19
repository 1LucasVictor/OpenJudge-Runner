#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    unsigned long long n,k,mod,ans=0;
    char token[30000]={};
    fgets(token, sizeof(token), stdin);
    n=atoi(strtok(token, " "));k=atoi(strtok(NULL, " "));
    if (n>=k) {
        mod=n%k;
        if (k/2<mod) ans=k-mod;
        else ans=mod;
    }else{
        if ((k/2)<n) ans=k-n;
        else ans=n;
    }
    printf("%lld",ans);
    return 0;
}


