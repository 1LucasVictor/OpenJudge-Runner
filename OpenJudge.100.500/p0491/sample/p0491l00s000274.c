#include <stdio.h>

int main(){
  long int N,K;
  long int ans;
  long int tmp;
  int flag = 0;
  scanf("%ld %ld",&N,&K);
  
  long int min=N;
  
  while(1){
    N=N-K;
    if(N<0) N*=-1;
    if(N < min) min = N;
    if(N > tmp && flag == 1){
      N=tmp;
      break;
    }
    flag=1;
    tmp = N;
  }
  
  printf("%ld\n",N);
  return 0;
}