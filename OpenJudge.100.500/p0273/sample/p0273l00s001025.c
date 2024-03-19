#include <stdio.h>

int n;
int F[100];

fibonacci(int n){
  if(n == 0 || n == 1){
    return F[n] = 1;
  }
  if(F[n] != F[n]){
    return F[n];
  }
  return F[n] = fibonacci(n-2)+fibonacci(n-1);
}

int main(){
  int i;

  for(i=0; i<100; i++){
    F[i] = -1;
  }

  scanf("%d",&n);

  printf("%d\n",fibonacci(n));

  return 0;
}