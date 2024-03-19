#include <stdio.h>
 
int main(){
  
  int D,N,ans;
  scanf("%d%d",&D,&N);
  
  if(D == 0){
    if(N == 100)
      ans = 101;
    ans = N;
  }else if(D == 1){
    if(N == 100)
      ans = 10100;
    ans = 100 * N;
  }else{
    if(N == 100)
      ans = 1010000;
    ans = 100 * 100 * N;
  }
  
  printf("%d",ans);
  
  return 0;
 
}