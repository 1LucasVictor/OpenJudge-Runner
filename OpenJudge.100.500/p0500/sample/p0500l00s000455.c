#include<stdio.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int s[m],c[m];
    for(int i = 0;i < m;i++)scanf("%d %d",&s[i],&c[i]);
    int max = 1;
    for(int i = 0;i < n;i++)max *= 10;
    int tmp;
    _Bool isyes = 1;
    for(int i = max/10;i < max;i++){
        isyes = 1;
        for(int j = 0;j < m;j++){
        tmp = i;
        for(int k = 0;k < n - s[j];k++)tmp /=10;
        if(tmp % 10 != c[j])isyes = 0;
    }
    if(isyes){
        printf("%d",i);
        return 0;
    }
    }
    printf("%d",-1);
    return 0;
}