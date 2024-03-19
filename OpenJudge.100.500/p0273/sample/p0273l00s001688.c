#include <stdio.h>
#define MAX 1000000
int fibonacci(int);
int N[MAX];
int main(){
  int n;
  scanf("%d",&n);
  printf("%d",fibonacci(n));
}

int fibonacci(int i){
  N[0] = 1;
  N[1] = 1;
  if(i == 1 || i == 0) return N[i];
  else{
    return fibonacci(i-1) + fibonacci(i-2);
  }
}

