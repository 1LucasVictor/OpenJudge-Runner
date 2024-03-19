#include<stdio.h>
int main(){
  int x,y,ans,i,j,esa;
  scanf("%d %d",&x,&y);
  if(x<y){
    for(i=x;i>0;i--){
      if(y%i==0 && x%y%i==0){
	ans=i;
	break;
      }
    }
  }
  else{
    for(i=y;i>0;i--){
      if(x%i==0 && y%x%i==0){
	ans=i;
	break;
      }
    }
  }
  printf("%d\n",ans);
  return(0);
}