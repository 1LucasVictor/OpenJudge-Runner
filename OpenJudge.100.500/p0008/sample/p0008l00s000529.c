#include <stdio.h>
int prime[10000000]={0};
int main(){
  int i,j,k,flag;
  while(scanf("%d",&i) != EOF){
    flag=0;
    for(j=2;j<=i/2;j++){
      for(k=2;k<i;k++){
	prime[j*k]=1;
      }
    }
    for(j=2;j<=i;j++){
      if(prime[j] == 0){
	flag++;
      }
    }
    printf("%d\n",flag);
  }
  return (0);
}