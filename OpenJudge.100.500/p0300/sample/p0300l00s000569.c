#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,nS,nT,q,count;
  int *S;
  S = (int *)malloc(sizeof(int) * 1000000000);
  scanf("%d",&nS);
  for(i=0;i<nS;i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&nT);
  count = 0;
  for(i=0;i<nT;i++){
    scanf("%d",&q);
    j = 0;
    while(j<nS){
      if( S[j] == q ){
	count++;
      }
      j++;
    }
  }
  printf("%d\n",count);
  return 0;
}
  