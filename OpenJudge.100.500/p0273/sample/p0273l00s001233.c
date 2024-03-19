#include <stdio.h>
int fibo[45];
int main(){
  int n;
  int i;
  scanf("%d",&n);
  fibo[0]=1;
  fibo[1]=1;
  for(i=2;i<=n;i++)fibo[i]=fibo[i-1]+fibo[i-2];

  printf("%d\n",fibo[n]);
  return 0;
}