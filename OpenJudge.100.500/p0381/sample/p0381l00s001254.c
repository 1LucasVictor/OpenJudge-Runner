#include<stdio.h>
 int main(void){
    int n,x,i=0,j=0,k=0;
    while(1){
        int ans=0;
        scanf("%d %d",&n,&x);
        if(n==0&&x==0){
            break;
        }
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
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