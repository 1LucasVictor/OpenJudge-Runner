#include <stdio.h>
int func(int);
int main (){
    int n;
    scanf("%d",&n);
    printf("%d\n",func(n));
    return 0;
}
int func(int n){
    int f[45],i;
    f[0]=1;
    f[1]=1;
    for(i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
