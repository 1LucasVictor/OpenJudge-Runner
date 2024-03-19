#include<stdio.h>

int min(int a,int b){return a<b ? a:b;}

int main(void){
    int n,a,b,ans;
    scanf("%d %d %d",&n,&a,&b);
    a=a*n;
    ans=min(a,b);
    printf("%d",ans);
    return 0;
}

