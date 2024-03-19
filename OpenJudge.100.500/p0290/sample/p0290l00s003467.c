#include<stdio.h>
#define N 10000
int isPrime(int x);

int main(){
  int n,i,x;
  int cnt=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    if(isPrime(x)==1) cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}

int isPrime(int x){
  int i;
  if(x<2) return 0;
  else if(x==2) return 1;

  if(x%2==0) return 0;
  for(i=3;i*i<=x;i+=2){
    if(x%i==0) return 0;
  }
  return 1;
}

