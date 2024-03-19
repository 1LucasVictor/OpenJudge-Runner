#include<stdio.h>
int main()
{
    int K,A,B,i;
    scanf("%d", &K);
    scanf("%d %d",&A,&B);
  for(i=K;i<A;i += K){
  }
  K = i;
  if ((A <= K) && (K <= B)){
    printf("OK");
  }
  else{
    printf("NG");
  }
  
  return 0;
}