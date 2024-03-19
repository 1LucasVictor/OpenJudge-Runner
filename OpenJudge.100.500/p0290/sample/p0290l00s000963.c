#include<stdio.h>
#define true 1
#define false 0

int main(){
  int n, x,i,r;
  int count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    r = isPrime(x);
    count = count + r;
  }
  printf("%d\n",count);

  return 0;
}

int isPrime(int x){
  int i;
  
  if(x==2) return true;

  if(x<2) return false;
  if(x%2==0) return false;

  i=3;
  while(i*i<=x){
    if( x % i == 0) return false;
    i = i + 2;
  }
  return true;
}

