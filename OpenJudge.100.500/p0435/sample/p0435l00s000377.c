#include <stdio.h>

int main(){
  int N,D;
  scanf("%d %d",&N,&D);
  int ans;
  ans = 0;
  for(int i=0;i<N;i++){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x*x+y*y<=D*D){
      ans++;
    }
  }
  printf("%d",ans);
  return 0;
}