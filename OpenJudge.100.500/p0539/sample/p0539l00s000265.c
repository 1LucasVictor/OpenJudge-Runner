#include <stdio.h>
int main(void){
  int n,i,ans = 0;
  scanf("%d",&n);
  
  for(i=1; i<=9; i++){
      if(n%i == 0 && 1 <= n/i && n/i <= 9){
          ans = 1;
      }
  }
  
  if(ans == 1){
      printf("Yes\n");
  }else{
      printf("No\n");
  }
 
  return 0;
}