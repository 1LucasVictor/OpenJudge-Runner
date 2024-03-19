#include <stdio.h>
 
int main(void){
  int k, a, b;
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  //printf("%d %d %d\n", k, a, b);
  //printf("%d %d\n", a%k, a/k);
  if(a % k == 0 && a / k >= 1){
    printf("OK");
   	return 0;
  }
  else if(b - a < k){
    printf("NG");
    return 0;
  }
  else{
    int x;
    x = a / k + 1;
    if(k * x < b){
      printf("OK");
      return 0;
    }
    else{
      printf("NG");
      return 0;
    }
  }
}