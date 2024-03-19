#include<stdio.h>
#include<math.h>
int a[1000001]={0};
int main(void){
    int n,i,j,ans,input;
    for(i=2;i<=1000000;i++){
        if(a[i]==0){
            for(j=2;i*j<=1000000;j++){
                a[i*j]=1;
            }
        }
    }
    while(scanf("%d",&input)!=EOF){
        ans=0;
        for(i=2;i<=input;i++){
            if(a[i]==0)ans++;
        }
    printf("%d\n",ans);
    }
    return 0;
}