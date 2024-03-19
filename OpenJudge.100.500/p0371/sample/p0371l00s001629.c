#include<stdio.h>

int main(void){
  int n , num;
  int i = 0;
  int max , min;
  int sum = 0;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &num);

    if(num < min){
      min = num;
    }
    
    if(num > max){
      max = num;
    }
    
    sum += num;
  }

  printf("%ld %ld %ld\n", min, max, sum);

  return 0;
}

