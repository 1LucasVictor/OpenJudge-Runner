#include <stdio.h>
 
int main(){
  int a = 0;
  scanf("%d",&a);
  int b = a%100;
  int c = b%10;
  if(c == 3){
    printf("bon");
  }else if(c == 0 || c==1 || c==6 || c==8){
    printf("pon");
  }else{
    printf("hon");
  }
  return 0;
}
