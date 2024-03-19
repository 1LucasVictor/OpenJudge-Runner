#include <stdio.h>

int main(){
  int a,b;
  int ans;
  scanf("%d %d",&a,&b);

  if( a < 10 && b < 10 )
  {
    ans = a*b;
  }else{
    ans = -1;
  }
  printf("%d\n",ans);

  return 0;
}