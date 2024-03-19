#include <stdio.h>
int main(){
  int k,a,b;
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  if(a/k != b/k){
    printf("OK");
  }else if(a == b||a % k == 0){
    printf("OK");
  }else{
    printf("NG");
  }
    return 0;
}