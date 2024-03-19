#include<stdio.h>
int main (void){
  int kame,turu,x,y,i,j,ans=0;;
  scanf("%d%d",&x,&y);
  //総当たり
  /*
  for(kame=0;kame<=x;kame++){
    turu=x-kame;
    if(kame*4+turu*2==y){ans=1;}
    
  }
  if(ans==1){printf("Yes\n");}
  else{printf("No\n");}
  */
  //条件を求める
  if(y%2==0||(x*2<=y&&y<=x*4)){printf("Yes\n");}
  else{printf("No\n");}
  
  return 0;
}