#include <stdio.h>

int main(){
  int H,A;
  scanf("%d %d",&H, &A);
  
  int count=0;
  for(;;){
    count++;
    H = H -A;
    if(H <= 0) break;
  }
  printf("%d",count);
}