#include <stdio.h>
#include <math.h>

int main(){
  int n,i,j,k=0;
  int A[10000];

  scanf("%d",&n);

  for(i=0; i < n; i++){
    scanf("%d",&A[i]);

    if(A[i] == 2){
      continue;
    } else if(A[i]%2 == 0){
      k++;
      continue;
    }
    for(j=3; j <= sqrt(A[i]); j += 2){
      if(A[i]%j == 0){
      k++;
      break;
      }
    }
  }
  printf("%d\n",n-k);

  return 0;
}

