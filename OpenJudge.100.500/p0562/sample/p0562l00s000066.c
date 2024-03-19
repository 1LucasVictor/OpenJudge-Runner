#include<stdio.h>

int main(void){
  int a,b, i;
  scanf("%d", &a);
  scanf("%d", &b);
  for(i =0; ;i++){
    if(i*(a-1)+1>= b){
        printf("%d\n", i);
      break;
    }
  }
  return 0;
}