#include<stdio.h>

#define MAX 10000

int main(void){
  int A[MAX], N, x, i, j, c=0;
  scanf("%d",&N);

  for(i = 0; i < N; i++){
    scanf("%d",&x);
    A[i] = x;
  }

  for(i = 0; i < N; i++){
    if(A[i] == 2 || A[i] == 3){
      c++;
    }

    for(j=3; j<A[i]; j+=2){
      if(A[i] % 2 == 0) break;
      if(A[i]%j == 0) break;
      if(j == A[i]-2 && A[i]-2 % j != 0) c++;

    }
  }
  printf("%d\n",c);
  return 0;
}