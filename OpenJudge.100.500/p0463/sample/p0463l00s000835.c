#include <stdio.h>

int main(){
 int N;
  scanf("%d",&N);
  
  int ans;
  ans = (N/1)%10;
  
  if(ans == 2|| ans == 4 || ans == 5 || ans == 7 || ans == 9){
    printf("hon");
  }else if(ans == 0 || ans == 1 || ans == 6 || ans == 8){
    printf("pon");
  }else{
    printf("bon");
  }
  
}