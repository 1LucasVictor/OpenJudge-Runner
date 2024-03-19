#include <stdio.h>
int main (void){
    int i,n,ans=1000;
    while(scanf("%d",&n)!=EOF){
    ans=1000;
    for(i=0;i<n;i++){
        ans=ans+ans*0.05;
        if(ans%10!=0){
            ans=ans/10;
            ans=ans+1;
            ans=ans*10;
        }
    }
    printf("%d\n",ans*100);
    }
return 0;
}