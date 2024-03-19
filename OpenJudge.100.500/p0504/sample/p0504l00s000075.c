#include <stdio.h>
 
int main(){
  int H, A;
  scanf("%d %d",&H, &A);
  int cnt=0;
  while(H > 0){
    H-=A;
    cnt++;
  }
  printf("%d", cnt);
  return 0;
}