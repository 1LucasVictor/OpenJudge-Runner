#include <stdio.h>
int main(void){
        int n,ans;
        scanf("%d",&n);
        if(n%2==1)
                ans=n/2+1;
        else
                ans=n/2;
        printf("%d\n",ans);
        return 0;
}