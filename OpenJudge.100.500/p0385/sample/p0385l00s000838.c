#include<stdio.h>
#include<stdlib.h>
#define L 1201

int main(void){

  int sum;
  long long n;

  while(1){
    sum=0;
    scanf("%lld", &n);
    if(n == 0) break;
    while(n > 0){
      sum += n%10;
      n /= 10;
    }
    printf("%d\n", sum);
  }

  return 0;
}

