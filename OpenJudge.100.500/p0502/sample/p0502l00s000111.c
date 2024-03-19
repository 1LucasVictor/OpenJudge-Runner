#include <stdio.h>

int main(){
  int N,A,c=1;
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    scanf("%d",&A);
    if(A%2==0){
      if((A%3)*(A%5)!=0) c=0;
    }
  }
  if(c==1) printf("APPROVED\n");
  else printf("DENIED\n");
  return 0;
}