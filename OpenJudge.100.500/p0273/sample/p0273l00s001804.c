#include<stdio.h>
#define max 44

int fibo(int);
int F[max];

int main(){

  int a;

  scanf("%d",&a);

  printf("%d\n",fibo(a));


  return 0;
}

int fibo(int n){

  int i;

  F[0] = 1;
  F[1] = 1;
  for(i=2;i<=n;i++){
    F[i] = F[i-2] + F[i-1];
  }

  return F[n];

}