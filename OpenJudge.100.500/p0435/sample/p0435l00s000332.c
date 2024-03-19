#include <stdio.h>

int main(void){
  int N, D, ans=0, x, y;
  int i;
  scanf("%d%d",&N,&D);
  for(i=0;i<N;i++){
    scanf("%d%d",&x,&y);
    if(x*x+y*y <= D*D) ans += 1;
  }
  printf("%d",ans);
}