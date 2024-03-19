#include <stdio.h>

int main(){
  int num;
  int dig;
  int sum;

  
  while(1){
    scanf("%d", &num);
    sum=0;
    if(num==0){
      break;
    }
    while(num!=0){
      dig=num%10;
      sum=sum+dig;
      num=num/10;
    }

    printf("%d\n", sum);
  }

  return 0;
}