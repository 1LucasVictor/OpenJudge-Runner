#include<stdio.h>
#define N 44

int n[N];

int Fibonacci(int j){
  if(n[j] == NULL){
    if(j == 0 || j == 1) n[j] = 1;
    else n[j] = Fibonacci(j-1) + Fibonacci(j-2);
  }
  return n[j];
}
int main(){
  int i;
  scanf("%d", &i);
  printf("%d\n", Fibonacci(i));
  return 0;
}