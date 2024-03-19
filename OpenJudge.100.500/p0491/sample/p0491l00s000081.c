#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    unsigned long long n,k,mod,ans=0,tmp;
    char token[300000]={};
    fgets(token, sizeof(token), stdin);
    n=atoll(strtok(token, " "));k=atoll(strtok(NULL, " "));
    if (n>=k) {
        mod=n%k;
        tmp=k-mod;
        if (tmp<mod) ans=tmp;
        else ans=mod;
    }else{
        tmp=k-n;
        if (tmp<n) ans=tmp;
        else ans=n;
    }
    printf("%lld",ans);
    return 0;
}

