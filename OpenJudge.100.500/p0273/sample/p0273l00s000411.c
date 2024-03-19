#include <stdio.h>

#define N 44

int fibonacci(int);

  int f[N];


int main(){

  int n,f;


  scanf("%d",&n);

  f=fibonacci(n);


  printf("%d\n",f);

  return 0;
}


int fibonacci(int x){

  int i;

  f[0]=1;
  f[1]=1;

  for(i=2;i<=x;i++) f[i]=f[i-2]+f[i-1];

  return f[x];

}