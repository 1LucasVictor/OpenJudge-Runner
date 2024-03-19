#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  int K;
  int min;
  scanf("%d %d", &N, &K);
  min = N;
  while(abs(N-K) <= min){
	if(abs(N-K) <= min){
      min = abs(N-K);
      N = N-K;
    }
  }
  printf("%d", min);
  return 0;
}