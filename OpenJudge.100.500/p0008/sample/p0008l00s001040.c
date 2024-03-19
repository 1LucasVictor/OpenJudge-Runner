#include <stdio.h>
#define MAX 1000000
int is_prime[MAX];
int prime[MAX];

int main(){
  int n;
  int i,j;
  int count;
  for(i=1;i<=MAX;i++) is_prime[i]=1;
  
  is_prime[0]=0;
  is_prime[1]=0;
  for(i=2;i<=MAX;i++){
    if(is_prime[i]){
      for(j=2*i;j<=MAX;j+=i)is_prime[j]=0;
    }
  }
  while(scanf("%d",&n)!=EOF){
    count=0;
    for(i=1;i<=n;i++){
      if(is_prime[i]==1)count++;
    }
    printf("%d\n",count);
  }
  return 0;
}