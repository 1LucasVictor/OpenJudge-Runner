#include <stdio.h>
int main(void){
  int k, a, b;
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  int n;
  for(n = a; n <= b; n++){
    if(n % k == 0){
        printf("OK\n");
        return 0;
    }
  }
  printf("NG\n");
  return 0;
}