#include<stdio.h>

int main(void)
{
    int n,k,t=0;
    int ans=0;

    scanf("%d %d",&n,&k);

    t=n%k;
    if (k-t<0){
        if (t<(k-t)*-1)
            ans=t;
        else
            ans=(k-t)*-1;
    }else{
        if (t<k-t)
            ans=t;
        else    
            ans=k-t;
    }  
    
    printf("%d\n",ans);


}