#include <stdio.h>
int main(void){
    int a,i,j,count,ans;
    while(scanf("%d",&a)!=EOF){
        ans=0;
        for(i=2;i<=a;i++){
            count=0;
            for(j=2;j<=a;j++){
                if(i%j==0)count++;
            }
            if(count==1)ans++;
        }
        printf("%d\n",ans);
    }
}