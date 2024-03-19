#include<stdio.h>
int main(){
  int W,H,x,y,r;
  scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
  if(0<x-r && 0<y-r){  
    if(W>x+r && H>y+r){
      if(0<x-r && H>y+r){
	if(0<y-r && W>x+r)printf("Yes\n");
	else printf("No\n");
      }
    }    
  }
  return 0;
}