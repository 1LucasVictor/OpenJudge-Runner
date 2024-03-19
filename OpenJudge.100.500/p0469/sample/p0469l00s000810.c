#include<stdio.h>
signed main(){
    int k,a,b;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);
    int sum=(b/k)*k;
    if(a<=sum){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    return(0);
    }