#include <stdio.h>

#define N 44

int F[N];

int makeFibonacci(){
  int i;
  F[0] = 1;
  F[1] = 1;
  for(i=2; i<N; i++){
    F[i] = F[i-2] + F[i-1];
  }
}

int main(){
  int num;
  scanf("%d",&num);
  makeFibonacci();
  printf("%d\n",F[num]);

  return 0;

}