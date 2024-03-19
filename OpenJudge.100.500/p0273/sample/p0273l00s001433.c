#include<stdio.h>

int main(){
    int n,f,i;
    int fib[45] = {};
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        if(i==0 || i==1)fib[i] = 1;
        else fib[i] = fib[i-2] + fib[i-1];
    }

    if(n==0 || n==1){
        printf("%d", fib[n]);
    } else {
        f = fib[n-1]+fib[n-2];
        printf("%d", f);
    }
    return 0;
}
