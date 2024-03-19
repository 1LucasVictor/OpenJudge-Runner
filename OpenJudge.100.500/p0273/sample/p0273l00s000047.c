#include<stdio.h>
#define N 44

int count = 0, s[N];

int main(){

  int x,sum;

  scanf("%d",&x);

  printf("%d\n",fibonacci(x));

}

int fibonacci(int n){

  if(n == 0 || n == 1){
    return s[n] = 1;
  }

  if(s[n] == 0){
    return s[n] = fibonacci(n-1) + fibonacci(n-2);
  } else {
    return s[n];
  }
  
}