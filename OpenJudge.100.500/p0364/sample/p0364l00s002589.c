#include<stdio.h>
int main(){
  int W,H,x,y,r;
  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
  if(W-x>r&&H-y>r){
    printf("Yes\n");
  }
  if(W-x<r||H-y<r){
    printf("No\n");
  }
  return 0;
}