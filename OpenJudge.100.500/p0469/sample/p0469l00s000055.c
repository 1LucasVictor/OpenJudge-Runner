#include<stdio.h>

int main(void){
  int k,a,b,i;
  scanf("%d %d %d", &k, &a, &b);
  if(k == 1)
    printf("OK");
  else if(k > b)
    printf("NG");
  else if(k <= b - a)
    printf("OK");
  else {
    for(i=a;i<b;i++){
      if(i%k == 0){
        printf("OK");
        break;
      }
      if(i == b-1)
        printf("NG");
    }
  }
  return 0;
}