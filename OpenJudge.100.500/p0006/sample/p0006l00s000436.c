#include<stdio.h>
#include<string.h>

int i,j,n;
int ans=100000;

int main(){
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        ans*=1.05;
        if(ans%1000!=0)ans-=ans%1000,ans+=1000;
    }
    printf("%d\n",ans);
    
    return 0;
}		

