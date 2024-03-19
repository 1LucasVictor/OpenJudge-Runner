#include <stdio.h>
int fibonacci(int);
int F[50];
int main() {

  int n,i;
  for(i=0;i<50;i++) F[i]=0;

  scanf("%d",&n);
  fibonacci(n);

  printf("%d\n",F[n]);

  return 0;
}
int fibonacci(int n)
{
  if(n==0 || n==1) return F[n]=1;

  if(F[n]!=0) return F[n];
  return F[n]=fibonacci(n-2)+fibonacci(n-1);
}