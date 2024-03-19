#include <stdio.h>

#define MAX 44

int n,F[MAX];
void makeFibonacci(void);


int main(){
  scanf("%d",&n);
  makeFibonacci();

  printf("%d\n",F[n]);
  return 0;
}

void makeFibonacci(){
  int i;
  F[0] = 1;
  F[1] = 1;

  for(i = 2; i < n+1; i++){
    F[i] = F[i-2] + F[i-1];
  }

}