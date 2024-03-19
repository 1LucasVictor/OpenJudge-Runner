#include<stdio.h>

int main(void){

  int k;

  scanf("%d", &k);

  int a, b;

  scanf("%d%d", &a, &b);

  if((b - a) > k){
    printf("OK");
  }else{
    int i, flag = 0;
    for(i = a; i <= b; i++){
      if(i % k == 0){
        printf("OK");
        flag = 1;
        break;
      }
    }
    if(flag == 0){
      printf("NG");
    }
  }

  return 0;
}
