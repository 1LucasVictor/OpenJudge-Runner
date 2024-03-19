#include <stdio.h>
int main(){
  int a,ans;
  scanf("%d",&a);
  ans = a / 2;
  
  if(a % 2 == 1){
  printf("%d\n",ans + 1);
  }
  
  else {
    printf("%d\n",ans);
  }
  
  return 0;
}