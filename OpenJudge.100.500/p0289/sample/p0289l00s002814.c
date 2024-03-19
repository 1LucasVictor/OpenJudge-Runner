#include<stdio.h>
int main(){
  int x,y,ans,i,j,esa;
  scanf("%d %d",&x,&y);
  if(x<y)esa=y-x;
  else esa=x-y;
  for(i=esa;i>0;i--){
    if(x%i==0 && y%i==0){
      ans=i;
      break;
    }
  }
  printf("%d\n",ans);
  return(0);
}
    