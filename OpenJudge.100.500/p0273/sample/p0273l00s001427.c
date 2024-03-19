#include <stdio.h>

int F[50];

int fibo(int n){
  if(n==0||n==1)return F[n]=1;
  if(F[n] != -1)return F[n];
  return F[n] = fibo(n-1) + fibo(n-2);
}

int main(){
  int n,i;
  for(i=0;i<50;i++){
    F[i]=-1;
  }
  scanf("%d",&n);
  printf("%d\n",fibo(n));


  return 0;
}