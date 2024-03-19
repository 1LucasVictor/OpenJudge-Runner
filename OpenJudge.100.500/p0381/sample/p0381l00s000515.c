#include <stdio.h>

int main(){
        int n,x,ans;
    for(;;){
        scanf("%d %d",&n,&x);
        ans=0;
        if(n==0) break;
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<=n;k++){
                    if(i+j+k==x){
                        ans++;
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
