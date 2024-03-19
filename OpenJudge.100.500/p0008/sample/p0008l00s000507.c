#include<stdio.h>
#define MAX 999999
 
int isPrime(int n){
  int i;
  if(n<2) return 0;
  if(n==2) return 1;
  if(n%2==0) return 0;
  for(i=3;i*i<=n;i+=2)
    if(n%i==0) return 0;
  return 1;
}
 
int main(void){
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
