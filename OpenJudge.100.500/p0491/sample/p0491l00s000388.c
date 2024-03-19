#include<stdio.h>
#include <stdlib.h>
int main(){
    int N,K,ans;
    scanf("%d %d",&N,&K);
    ans=abs(N);
    while(1){
        if(ans>abs(ans-K)){
            ans=abs(ans-K);
        }else
        {
            break;
        }
        
    }
    printf("%d\n",ans);
}