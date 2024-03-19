#include <stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  int i,j,t;
  t = 0;
  for(i = 1;i <= 9; i++){
    for(j = i; j <= 9; j++){
      if(i*j == n){
        t = 1;
        break;
      }
    }
  }
  if(t == 1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
