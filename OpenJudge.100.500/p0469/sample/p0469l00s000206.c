#include <stdio.h>
int main(void){
  int K,a,b;
 
  scanf("%d\n", &K);
  scanf("%d %d\n", &a, &b);
  int i = a;
  if(i>b) printf("NG");
  while(i<=b){
    if(i%K==0){
      printf("OK");
      break;
    }else if(i==b){
      printf("NG");
    }
    i++;
  }
  return 0;
}