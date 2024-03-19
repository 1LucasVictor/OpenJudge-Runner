#include<stdio.h>
#include<stdlib.h>
#define df 0


int main(){
  int n,a,b;
  scanf("%d%d%d",&n,&a,&b);

  printf("%d",n*a<b?n*a:b);
  return 0;
}


/// confirm df==0 ///