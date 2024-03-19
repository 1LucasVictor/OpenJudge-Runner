#include <stdio.h>

int main(){
  long int n,d;
  scanf("%ld%ld",&n,&d);
  int ans = 0,i=0;
  for(i;i<n;++i){
    long int x,y;
    scanf("%ld%ld",&x,&y);
    if(x*x+y*y<=d*d)ans++;
  }
  printf("%d\n",ans);
  return 0;
}
