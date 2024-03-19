#include <stdio.h>
int main (void){
    int i,n,ans=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        ans=ans+ans*0.05;
        if(ans%1000!=0){
            ans=ans/1000;
            ans=ans+1;
            ans=ans*1000;
        }
    }
    printf("%d\n",ans);
return 0;
}