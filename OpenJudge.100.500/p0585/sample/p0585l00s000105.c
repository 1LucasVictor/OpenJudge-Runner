#include<stdio.h>
int main(void){
    int n,b,t,ans=0;
    scanf("%d %d %d",&n,&b,&t);
    while(1){
        if(t<n){
            break;
        }
        ans+=b;
        t-=n;
    }
    printf("%d\n",ans);
}

