#include <stdio.h>
int main(){
  int k, a, b;
  scanf("%d", &k);
  scanf("%d%d", &a, &b);
  int o=(b/k)*k;
  if (a<=o){
    printf("OK");
    }
  else {
    printf("NG");
  }
 return 0;
 }