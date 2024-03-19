#include <stdio.h>

int main(){
  int x,n[4],i,ans=0;
  while(1){
    scanf("%d",&x);
    if(x==0)break;
    for(i=0; i<4; i++){
      n[i]=x%10;
      x/=10;
      ans+=n[i];
    }
    printf("%d\n",ans);
    ans=0;
  }
  return 0;
}