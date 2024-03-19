#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
  int n,d,x,y;
  int ans=0;
  scanf("%d %d ",&n,&d);
  for(int i=0;i<n;i++){
    scanf("%d %d",&x,&y);
    if(x*x+y*y<=d*d){
      ans++;
    }
  }
  printf("%d",ans);
  return 0;
}