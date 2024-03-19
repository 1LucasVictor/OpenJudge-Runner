#include<stdio.h>

int main(){
  long n,d,ans=0;
  scanf("%ld %ld",&n,&d);
  long x[n+1],y[n+1];
  for(int i=1;i<=n;i++){
    scanf("%ld %ld",&x[i],&y[i]);
    if(x[i]*x[i]+y[i]*y[i]-d*d<=0)ans+=1;
  }
  printf("%ld",ans);
  return 0;
}