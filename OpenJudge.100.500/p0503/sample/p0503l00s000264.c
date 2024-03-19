#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;

int main(void){
  long i, j;
  long N;
  int f=0;


  scanf("%ld",&N);
  ll A[N];

  for(i=0;i<N;i++){
    scanf("%I64d",&A[i]);
  }

  for(i=0;i<N-1;i++){
      for(j=i+1;j<N;j++){
          if(A[i]==A[j]){
              f=1;
              break;
          }
      }
      if(f==1) break;
  }

  if(f==0){
    printf("YES\n");
  }else{
    printf("NO\n");
  }

  return 0;
}
