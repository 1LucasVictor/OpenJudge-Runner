#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

void main(void)
{
  int A,B,K;
  scanf("%d",&K);
  scanf("%d %d",&A,&B);
  int i=2,flag=0,tmp=K;
  while(K<=B){
    if((A<=K)&&(K<=B)) flag=1;
    
    K=tmp*i;
    i++;
  }
  if(flag>0) printf("OK");
  else printf("NG");
  
}