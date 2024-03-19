#include<stdio.h>
int main(){
  int x,y,ans;
  scanf("%d%d",&x,&y);
  if(x<=0||y<=0||x>1000000001||y>1000000001){
    return 0;
  }
  int i;
  for(i=1;x>=i && y>=1;i++){
    if(x%i==0&&y%i==0)ans=i;
  }
  printf("%d\n",ans);
  return 0;
}

