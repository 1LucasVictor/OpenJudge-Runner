#include<stdio.h>

int main(){
  int n, i; 
  int f[44];

  scanf("%d", &n);
  f[0]=f[1]=1;
  for(i=2;i<=n;i++) f[i]=f[i-1]+f[i-2];
  printf("%d\n",f[n]);

  return 0;
}

