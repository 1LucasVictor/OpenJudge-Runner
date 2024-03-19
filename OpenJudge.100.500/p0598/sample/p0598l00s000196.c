#include <stdio.h>

int main(){
  unsigned int a, b = 0;

  scanf("%d %d", &a, &b);
  if(b % a == 0){
    printf("%d\n", b+a);
  }else{
    printf("%d\n", b-a);
  }
  return 0;
}
