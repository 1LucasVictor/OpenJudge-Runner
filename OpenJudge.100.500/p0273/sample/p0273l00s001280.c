#include <stdio.h>

int F[50];

int fibonacci(int x){
  if(x == 0 || x == 1) return F[x] = 1;
  if(F[x] != NULL)return F[x];
  return F[x] = fibonacci(x - 1) + fibonacci(x - 2);
}

int main(){
  int x;
  
  scanf("%d",&x);
  printf("%d\n",fibonacci(x));

  return 0;
}

