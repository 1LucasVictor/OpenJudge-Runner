#include<stdio.h>
int main(){
  int n,x,sum,ans;
  for(;;){
    scanf("%d %d",&n,&x);
    if(n==0&&x==0) break;
    for(int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        for(int k=j+1;k<=n;k++){
          sum=i+j+k;
          if(sum==x)ans++;
        }
      }
    }
    printf("%d\n",ans);
    ans=0;
  }
}
