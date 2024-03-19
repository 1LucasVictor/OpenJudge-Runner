#include<stdio.h>

int main(){
    int a,b,c,k,n=0;
    if(scanf("%d%d%d%d", &a,&b,&c,&k)==1);
    if(a>=k){n=k;}
    else if(a+b>=k){n=a;}
    else{n=2*a+b-k;}
    printf("%d", n);
    return 0;
}
