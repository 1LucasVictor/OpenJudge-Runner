#include <stdio.h>
#include <stdlib.h>

int main(void){
  int a,b,k;
  scanf("%d",&k);
  scanf("%d %d",&a, &b);
 int i;
  for(i=a; i<=b; i++){
    if(i % k == 0){
      printf("OK");
      return 0;
    }
  }
  printf("NG");
  return 0;
}
 