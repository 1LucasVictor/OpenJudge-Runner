#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int A,B,K,Ans,Bns;
  scanf("%d",&A);scanf("%d",&B);
  for(K=0;K<1000000000;K++){
    Ans=abs(A-K);
    Bns=abs(B-K);
    if(Ans==Bns){
      printf("%d",K);
      break;
    }else if(K==1000000000){
      printf("IMPOSSIBLE");
      }
    }
    return 0;
  }

