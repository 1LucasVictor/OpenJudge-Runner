#include <stdio.h>

int fibo[45];

void Fibo(int n,int max){
  if (n>=2){
    fibo[n]=fibo[n-1]+fibo[n-2];
  }
  if (n!=max){
    Fibo(n+1,max);
  }
}

int main() {
  int n;
  fibo[0]=fibo[1]=1;
  scanf("%d",&n);
  if (n==0||n==1){
    fibo[n]=1;
  } else {
    Fibo(2,n);
  }
  printf ("%d\n",fibo[n]);
  return 0;
}