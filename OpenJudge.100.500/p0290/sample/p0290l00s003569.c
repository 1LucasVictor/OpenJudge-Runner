#include<stdio.h>
#include<math.h>
#define N 10000

int main(void){

  int A[N], i, n, j, c=0;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%d",&A[i]);
  }

  for(i = 0; i < n; i++){

    if(A[i] == 2) c++;
    if(A[i] < 9 && A[i]%2 !=0) c++;

    for(j = 3; j <= sqrt(A[i]); j += 2){
      if(A[i]%j != 0) c++;
    }
  }

  printf("%d\n", c);

  return 0;

}