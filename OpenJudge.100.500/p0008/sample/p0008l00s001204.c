#include <stdio.h>
#define MAX 1000000

int main(void){
  int prime[MAX];
  int i,j,n;

  prime[0]=prime[1]=0;
  for(i=2;i<MAX;i++)
    prime[i]=1;
  for(i=2;i*i<=MAX;i++){
    for(j=2;;j++){
      if(i*j > 999999)
	break;
      prime[i*j]=0;
    }
  }
  while(scanf("%d",&n) != EOF){
    int sum=0;
    for(i=2;i<=n;i++)
      sum+=prime[i];

    printf("%d\n",sum);
  }
  return 0;
}