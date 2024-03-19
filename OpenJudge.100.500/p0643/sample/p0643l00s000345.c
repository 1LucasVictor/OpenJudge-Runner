#include <stdio.h>
int main(){
  int a,b;
  
  scanf("%d %d\n",&a,&b);
  if((a*b)%2 == 0){
    printf("Even\n");
  }
  if((a*b)%2 == 1){
    printf("0dd\n");
  }
  return 0;
}
