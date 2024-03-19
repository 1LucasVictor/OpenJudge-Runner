#include <stdio.h>

#define fib_max 44

int answer_cal(int);
int fib[fib_max];

int main(){
  int n;

  scanf("%d" ,&n);
  printf("%d\n" ,answer_cal(n));

  return 0;
}

int answer_cal(int n){
  if(fib[n] > 0){
    return fib[n];
  }

  if(n <= 1){
    return 1;
  }else{
    return fib[n] = answer_cal(n-1) + answer_cal(n-2);
  }
}

