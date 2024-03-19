#include <stdio.h>
 
int main(void){
  int n,i,now;
  int before = -1;
  scanf("%d",&n);
  for(i=0;i<4;i++){
    now = n % 10;
    n = n % 10;
    if(before == now){
      printf("Bad");
      return 0;
    }
    before = now;
  }
  printf("Good");
  return 0;
}