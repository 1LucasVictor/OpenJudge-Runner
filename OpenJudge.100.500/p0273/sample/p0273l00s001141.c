#include <stdio.h>
#define n 44
int main(){
  int f[n],i,a;
  f[0]=f[1]=1;
  scanf("%d",&a);
  for(i=2;i<=a;i++){
    f[i]=f[i-1]+f[i-2];
  }
  printf("%d\n",f[a]);
  return 0;
}