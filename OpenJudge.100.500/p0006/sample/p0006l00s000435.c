#include<stdio.h>

int main(){
  int x, i, sum;
  sum = 100000;

  scanf("%d",&x);

  for(i = 0; i < x; i++){
    sum *= 1.05;
    if(sum % 1000 != 0){
      sum /= 1000;
      sum += 1;
      sum *= 1000;
    }
      
  }
  printf("%d\n",sum);

  return 0;

}