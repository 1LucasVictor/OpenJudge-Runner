#include<stdio.h>

int main(void)
{
    int n,k,t=0;
    int ans=0;

    scanf("%d %d",&n,&k);

    t=n%k;
    if (t==0)
        ans=0;
    else if (t-k<0){
        if (t<(t-k)*-1)
            ans=t;
        else
            ans=(t-k)*-1;
    }else{
        if (t<t-k)
            ans=t;
        else    
            ans=t-k;
    }  
    
    printf("%d\n",ans);


}