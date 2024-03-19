#include<stdio.h>
int main(){
  int i,n;
  scanf("%d",&n);
  int f[44];
  f[0]=1;
  f[1]=1;
  for(i=2;i<=n;i++)f[i]=f[i-1]+f[i-2];
  printf("%d\n",f[n]);
  return 0;
}

