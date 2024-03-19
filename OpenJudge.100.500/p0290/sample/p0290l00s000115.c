#include<stdio.h>

int isPrime(int);

int main(){
  int i, n, cnt=0;
  int a;
  
  scanf("%d", &n);
  for(i=0;i<n;i++) {
    scanf("%d", &a);
    cnt+=isPrime(a);
  }
  printf("%d\n", cnt);
  
  return 0;
}

int isPrime(int x)
{
  int i;
  if(x==2) return 1;
  if(x%2==0) return 0;
  for(i=3;i*i<=x;i+=2) 
    if(x%i==0) return 0;
  return 1;
}

