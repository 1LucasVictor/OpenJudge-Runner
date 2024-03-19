#include<stdio.h>
int main() {
  int k,a,b;
  scanf("%d%d%d",&k,&a,&b);
  int d;
  d=(b/k)-(a/k);
  if(d>0) {printf("OK");}
  else if(b%k==0 || a%k==0) {printf("OK");}
  else {printf("NG");}
  return 0;
  }