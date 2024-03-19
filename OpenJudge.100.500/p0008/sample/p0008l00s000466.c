#include<stdio.h>
#define MAX 1000010

int isPrime(int n){
  int i;
  if(n<2)return 0;
  if(n==2)return 1;
  if(n%2==0)return 0;
  for(i=3;i<=n/i;i+=2)
    if(n%i==0)
      return 0;
  return 1;
}

int main(){
  int a,i;
  int prime[MAX];
  for(i=0;i<=MAX;i++)
    prime[i]=isPrime(i);
  for(i=1;i<MAX;i++)
    prime[i]+=prime[i-1];
  while(scanf("%d",&a)!=EOF){
    printf("%d\n",prime[a]);
  }
  return 0;
}