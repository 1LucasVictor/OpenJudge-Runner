#include <stdio.h>
int main(){
  int a,i,f[44];
  scanf("%d",&a);
  for(i=2;i<a+1;i++)f[i]=-1;
  f[0]=1;
  f[1]=1;
  for(i=2;i<a+1;i++)f[i] = f[i-2]+f[i-1];
  printf("%d\n",f[a]);
  return 0;
}

