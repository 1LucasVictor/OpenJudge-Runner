#include <stdio.h>
#define MAX 44
int fibonacci(int);
int F[MAX];
int main(){
  int n,i;
  scanf("%d",&n);
  for(i = 0 ;i < MAX;i++){
    F[i] = -1;
  }
  printf("%d\n",fibonacci(n));
}

int fibonacci(int i){

  if(i == 1 || i == 0) return F[i] = 1;
  else{
    if(F[i] != -1) return F[i];
    return F[i] = fibonacci(i-1) + fibonacci(i-2);
  
  }
}

