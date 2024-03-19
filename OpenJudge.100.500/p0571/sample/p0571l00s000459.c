#include<stdio.h>
#include<stdlib.h>


int main(){
  int N,A,B,i,G,K,J;
  scanf("%d",&N) ;
  scanf("%d",&A) ;
  scanf("%d",&B) ;

  for(i=0;i<=N;i++){
    G=A*i;
    K=G ;
    if(K>B){
      K=B ;
      break ;
    }
  }
  printf("%d",K) ;
}
