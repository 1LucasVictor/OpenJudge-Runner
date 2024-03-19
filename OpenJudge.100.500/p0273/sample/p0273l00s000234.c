#include<stdio.h>
int main(void){
  int n,i,F[45];
  F[0]=F[1]=1;
  scanf("%d",&n);
  for(i=2;i<=n;i++)
    F[i]=F[i-1]+F[i-2];
  printf("%d\n",F[n]);
  return 0;
}