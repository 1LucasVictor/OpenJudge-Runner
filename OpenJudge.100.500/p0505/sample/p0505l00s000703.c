#include<stdio.h>
int main(void)
{
  long int H,N,i,sum,A[10000];
  sum = 0;
  scanf("%ld",&H);
  scanf("%ld",&N);
  for(i=0;i<N;i++){
   scanf("%ld",&A[i]);
    sum =sum + A[i];
    if(H-sum<=0){
        break;
    }
  }
  if(H-sum <= 0){
    printf("Yes");
  }
  else{
  printf("No");
  }
  return 0;
}
