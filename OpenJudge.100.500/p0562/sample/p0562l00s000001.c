#include <stdio.h>
#include <stdlib.h>

int main(){
  int A,B,ans;
  scanf("%d%d",&A,&B);
  ans = B/A;
  if(B%A!=0) ans++;
  printf("%d\n",ans);
  return 0;
}