#include<stdio.h>
int main(){
  int i, K, A, B, c=0;
  scanf("%d",&K);
  scanf("%d%d",&A,&B);
  for(i=A; i<=B; i++){
    if (i%K==0){
      c=1;
      break;
    }
    else
      continue;
  }
  if (c==0)
  printf("NG");
  else
  printf("OK");
}