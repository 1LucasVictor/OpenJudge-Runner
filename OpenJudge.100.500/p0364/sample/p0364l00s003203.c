#include<stdio.h>

int main(){
  int W, H,x,y,r;
  scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
  if(x<0||x>W||y<0||y>H||x-r<0||x+r>W||y-r<0||y+r>H) printf("No\n");
  else printf("Yes\n");
  return 0;
}

