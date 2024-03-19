#include<stdio.h>
signed main(){
  int x,y;
  scanf("%d %d",&x,&y);
  if(x*2<=y&&y<=x*4&&y%2==0)
  {
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
return(0);
}
