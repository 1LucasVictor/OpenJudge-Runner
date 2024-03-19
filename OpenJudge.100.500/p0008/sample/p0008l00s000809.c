#include<stdio.h>
int main(){
  int n,i,j,yakusuu,prime;
  while(scanf("%d",&n) != EOF){
    prime=0;
    for(i=1;i<=n;i++){
      yakusuu=0;
      for(j=1;j<=i;j++){
	if(i%j==0){
	  yakusuu++;
	}
      }
	if(yakusuu==2){
	  prime++;
	}
    }
    printf("%d\n",prime);
  }
  return 0;
}