#include <stdio.h>
#include <stdlib.h>
int main(){
  int N,ans;
  scanf("%d",&N);
  ans=N%10;
  if(ans==3) printf("bon");
  else if(ans==0 || ans==1 || ans==6 || ans==8) printf("pon");
  else printf("hon");
  return 0;
}